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

	num1 = 1;
	num2 = 2;
	fb = efb = 0;
	while (fb < 4000000)
	{
		fb = num1 + num2;
		num1 = num2;
		num2 = fb;
		if ((num1 % 2) == 0)
			efb += num1;
	}
	printf("%ld\n", efb);
	return (0);
}
