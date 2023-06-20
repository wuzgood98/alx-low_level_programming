#include <stdio.h>
/**
 * main - prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded),
 * followed by a new line.
 *
 * Return: always 0
 */
int main(void)
{
	int n1, n2;

	for (n1 = 1; n1 < 1024; n1++)
	{
		if ((n1 % 3) == 0 || (n1 % 5 == 0))
			n2 += n1;
	}
	printf("%d\n", n2);
	return (0);
}
