#include "3-calc.h"

/**
 * main - checks the code.
 * @argc: arguments count.
 * @argv: array of pointers to the arguments.
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	result = get_op_func(argv[2]);

	if (result == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", result(num1, num2));

	return (0);
}
