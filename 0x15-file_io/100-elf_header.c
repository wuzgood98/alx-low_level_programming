#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_address - prints address
 * @ptr: magic pointer.
 *
 * Return: nothing.
 */
void print_address(char *ptr)
{
	int start, index;
	char check;

	printf("  Entry point address:               0x");

	check = ptr[4] + '0';
	if (check == '1')
	{
		start = 26;
		printf("80");
		for (index = start; index >= 22; index--)
		{
			if ((unsigned char)ptr[index] > 0)
				printf("%x", (unsigned char)ptr[index]);
			else if ((unsigned char)ptr[index] < 0)
				printf("%x", 256 + (unsigned char)ptr[index]);
		}
		if (ptr[7] == 6)
			printf("00");
	}
	if (check == '2')
	{
		start = 26;
		for (index = start; index > 23; index--)
		{
			if ((unsigned char)ptr[index] >= 0)
				printf("%02x", (unsigned char)ptr[index]);
			else if (ptr[index] < 0)
				printf("%02x", 256 + (unsigned char)ptr[index]);
		}
	}
	printf("\n");
}

/**
 * print_type - print the type.
 * @ptr: magic pointer.
 *
 * Return: nothing.
 */
void print_type(char *ptr)
{
	char magic_type = ptr[16];

	if (ptr[5] == 1)
		magic_type = ptr[16];
	else
		magic_type = ptr[17];

	printf("  Type:                              ");
	switch (magic_type)
	{
		case 0:
			printf("NONE (No file type)\n");
			break;
		case 1:
			printf("REL (Relocatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object file)\n");
			break;
		case 4:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", magic_type);
	}
}

/**
 * print_os_abi - prints osabi
 * @ptr: magic pointer.
 *
 * Return: nothing.
 */
void print_os_abi(char *ptr)
{
	char os_abi = ptr[7];

	printf("  OS/ABI:                            ");
	switch (os_abi)
	{
		case 0:
			printf("UNIX - System V\n");
			break;
		case 2:
			printf("UNIX - NetBSD\n");
			break;
		case 6:
			printf("UNIX - Solaris\n");
			break;
		default:
			printf("<unknown: %x>\n", os_abi);
	}
	printf("  ABI Version:                       %d\n", ptr[8]);
}

/**
 * print_version - prints the version.
 * @ptr: magic pointer.
 *
 * Return: nothing.
 */
void print_version(char *ptr)
{
	int version = ptr[6];

	printf("  Version:                           %d", version);

	if (version == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}

/**
 * print_data - prints the data
 * @ptr: magic pointer.
 *
 * Return: nothing
 */
void print_data(char *ptr)
{
	char data = ptr[5];

	printf("  Data:                              2's complement");
	if (data == 1)
		printf(", little endian\n");
	if (data == 2)
		printf(", big endian\n");
}

/**
 * print_magic_info - prints the magic information.
 * @ptr: magic pointer.
 *
 * Return: nothing.
 */
void print_magic_info(char *ptr)
{
	int info_bytes = 0;

	printf("  Magic:  ");

	for (; info_bytes < 16; info_bytes++)
		printf(" %02x", ptr[info_bytes]);

	printf("\n");
}

/**
 * check_elf - check if the file is an elf file.
 * @ptr: magic pointer.
 *
 * Return: 1 if it is an elf file, otherwise 0.
 */
int check_elf(char *ptr)
{
	int address = (int)ptr[0];
	char E = ptr[1], L = ptr[2], F = ptr[2];

	if (address == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}

/**
 * check_system - check the version of the system.
 * @ptr: magic pointer
 *
 * Return: nothing.
 */
void check_system(char *ptr)
{
	char system = ptr[4] + '0';

	if (system == '0')
		exit(98);

	printf("ELF Header:\n");
	print_magic_info(ptr);

	if (system == '1')
		printf("  Class:                             ELF32\n");
	if (system == '2')
		printf("  Class:                             ELF64\n");

	print_data(ptr);
	print_version(ptr);
	print_os_abi(ptr);
	print_type(ptr);
	print_address(ptr);
}

/**
 * main - check the code.
 * @argc: arguments count.
 * @argv: pointer to the list of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd, file_read;
	char ptr[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}

	lseek(fd, 0, SEEK_SET);
	file_read = read(fd, ptr, 27);

	if (file_read == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}

	if (!check_elf(ptr))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}

	check_system(ptr);
	close(fd);

	return (0);
}
