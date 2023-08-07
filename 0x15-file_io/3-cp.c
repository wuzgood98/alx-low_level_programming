#include "main.h"

/**
 * print_error - prints error to stdout.
 * @file_from: file to read from.
 * @file_to: file to write to.
 * @argv: pointer to the list of arguments.
 *
 * Return: nothing.
 */
void print_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: arguments count.
 * @argv: pointer to the list of arguments
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_err;
	ssize_t read_bytes, write_bytes;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	print_error(file_from, file_to, argv);

	read_bytes = BUF_SIZE;
	while (read_bytes == BUF_SIZE)
	{
		read_bytes = read(file_from, buffer, BUF_SIZE);
		if (read_bytes == -1)
			print_error(-1, 0, argv);
		write_bytes = write(file_to, buffer, read_bytes);
		if (write_bytes == -1)
			print_error(0, -1, argv);
	}

	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	return (0);
}
