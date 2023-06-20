#include <stdio.h>
/**
 * main - print first 98 fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int i, a, b, c;

	a = 1;
	b = 2;

	printf("%d, %d", a, b);

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf(", %d", c);

		a = b;
		b = c;
	}

	printf("\n");
	return (0);
}
