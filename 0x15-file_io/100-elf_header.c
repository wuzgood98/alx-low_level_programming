#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_magic_info(unsigned char *ptr);
void print_class(unsigned char *ptr);
void check_elf(unsigned char *ptr);
void print_type(unsigned int type, unsigned char *ptr);
void print_abi(unsigned char *ptr);
void print_os_abi(unsigned char *ptr);
void print_data(unsigned char *ptr);
void print_version(unsigned char *ptr);
void close_elf(int file);
void print_entry(unsigned long int entry, unsigned char *ptr);

/**
 * print_entry - print the entry point of an ELF header.
 * @entry: The address of the ELF entry point.
 * @ptr: magic pointer.
 *
 * Return: nothing.
 */
void print_entry(unsigned long int entry, unsigned char *ptr)
{
	printf("  Entry point address:               ");

	if (ptr[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			  ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}

	if (ptr[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);

	else
		printf("%#lx\n", entry);
}

/**
 * close_elf - close an ELF file.
 * @file: The file descriptor of the ELF file.
 *
 * Return: nothing.
 */
void close_elf(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", file);
		exit(98);
	}
}

/**
 * print_class - prints the class of an ELF header.
 * @ptr: magic pointer.
 *
 * Return: nothing.
 */
void print_class(unsigned char *ptr)
{
	printf("  Class:                             ");

	switch (ptr[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", ptr[EI_CLASS]);
	}
}

/**
 * print_abi - prints the ABI version of an ELF header.
 * @ptr: magic pointer
 */
void print_abi(unsigned char *ptr)
{
	printf("  ABI Version:                       %d\n",
	       ptr[EI_ABIVERSION]);
}

/**
 * print_type - print the type.
 * @type: type of elf.
 * @ptr: magic pointer.
 *
 * Return: nothing.
 */
void print_type(unsigned int type, unsigned char *ptr)
{
	if (ptr[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf("  Type:                              ");

	switch (type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", type);
	}
}

/**
 * print_os_abi - prints osabi
 * @ptr: magic pointer.
 *
 * Return: nothing.
 */
void print_os_abi(unsigned char *ptr)
{
	printf("  OS/ABI:                            ");

	switch (ptr[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", ptr[EI_OSABI]);
	}
}

/**
 * print_version - prints the version.
 * @ptr: magic pointer.
 *
 * Return: nothing.
 */
void print_version(unsigned char *ptr)
{
	printf("  Version:                           %d", ptr[EI_VERSION]);

	if (ptr[EI_VERSION] == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}

/**
 * print_data - prints the data
 * @ptr: magic pointer.
 *
 * Return: nothing
 */
void print_data(unsigned char *ptr)
{
	printf("  Data:                              ");

	switch (ptr[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", ptr[EI_CLASS]);
	}
}

/**
 * print_magic_info - prints the magic information.
 * @ptr: magic pointer.
 *
 * Return: nothing.
 */
void print_magic_info(unsigned char *ptr)
{
	int info_bytes = 0;

	printf("  Magic:  ");

	for (; info_bytes < EI_NIDENT; info_bytes++)
	{
		printf(" %02x", ptr[info_bytes]);

		if (info_bytes == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * check_elf - check if the file is an elf file.
 * @ptr: magic pointer.
 *
 * Return: nothing
 */
void check_elf(unsigned char *ptr)
{
	int index = 0;

	for (; index < 4; index++)
	{
		if (ptr[index] != 127 &&
		    ptr[index] != 'E' &&
		    ptr[index] != 'L' &&
		    ptr[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * main - check the code.
 * @argc: arguments count.
 * @argv: pointer to the list of arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int open_file, read_file;
	Elf64_Ehdr *header;

	open_file = open(argv[1], O_RDONLY);
	if (open_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(open_file);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	read_file = read(open_file, header, sizeof(Elf64_Ehdr));
	if (read_file == -1)
	{
		free(header);
		close_elf(open_file);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic_info(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_os_abi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(open_file);

	return (0);
}
