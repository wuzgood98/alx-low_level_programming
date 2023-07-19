#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 * @argc: arguments count.
 * @argv: array of pointers to the arguments.
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int index = 0, bytes;
	char *opcode = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (index < bytes)
	{
		printf("%02x", opcode[index] & 0xFF);
		if (index != (bytes - 1))
			printf(" ");
		index++;
	}

	printf("\n");
	return (0);
}
