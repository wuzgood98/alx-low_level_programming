#include <stdio.h>

/**
 * main - print numbers 1 - 100 with Fizz Buzz FizzBuzz
 *
 * Return: always return 0.
 */

int main(void)
{
	int index;

	for (index = 1; index <= 100; index++)
	{
		if ((index % 3 == 0) && (index % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (index % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (index % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", index);
		}
	}

	printf("\n");
	return (0);
}
