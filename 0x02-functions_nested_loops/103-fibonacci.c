#include <stdio.h>
/**
 * main - prints the addition of a given
 * fibonacci values which are even numbers
 *
 * Return: always 0
 */
int main(void)
{
	long int num1, num2, fb, efb;

	n1 = 1;
	n2 = 2;
	fb = efb = 0;
	while (fb < 4000000)
	{
		fb = n1 + n2;
		n1 = n2;
		n2 = fb;
		if ((n1 % 2) == 0)
			efb += n1;
	}
	printf("%ld\n", efb);
	return (0);
}
