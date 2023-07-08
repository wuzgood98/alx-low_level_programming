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
	int multiple, num_1, num_2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[2]);

	multiple = num_1 * num_2;

	printf("%d\n", multiple);

	return (0);
}
