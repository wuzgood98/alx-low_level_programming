#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: arguments count.
 * @argv: pointer to the arguments
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int multiple = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	multiple = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multiple);
	return (0);
}
