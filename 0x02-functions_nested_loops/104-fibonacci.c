#include <stdio.h>
/**
 * main - print first 98 fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	unsigned long a, b, c;

	a = 1;
	b = 2;

	printf("%lu, %lu", a, b);

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf(", %lu", c);

		a = b;
		b = c;
	}

	printf("\n");
	return (0);
}
