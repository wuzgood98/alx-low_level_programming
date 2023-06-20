#include <stdio.h>
/**
 * main - print first 98 fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long long i, a, b, c;

	a = 1;
	b = 2;

	printf("%llu, %llu", a, b);

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf(", %llu", c);

		a = b;
		b = c;
	}

	printf("\n");
	return (0);
}
