#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: arguments count
 * @argv: pointer to the arguments.
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
