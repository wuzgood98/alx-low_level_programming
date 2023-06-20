#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	long int n1, n2, fb;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (n = 0; n < 48; n++)
	{
		fb = n1 + n2;
		printf(", %ld", fb);
		n1 = n2;
		n2 = fb;
	}
	printf("\n");
	return (0);
}
