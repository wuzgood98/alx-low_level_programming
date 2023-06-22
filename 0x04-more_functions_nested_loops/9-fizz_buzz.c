#include <stdio.h>

/**
 * main - print numbers 1 - 100 with Fizz Buzz FizzBuzz
 *
 * Return: always return 0.
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (index % 3 == 0)
		{
			printf("Fizz");
		}
		else if (index % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", index);
		}

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");
	return (0);
}
