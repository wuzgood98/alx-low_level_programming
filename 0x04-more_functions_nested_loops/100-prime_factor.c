#include <stdio.h>

/**
 * main - prints the largest prime factor
 * of a given number.
 *
 * Return: always 0.
 */
int main(void)
{
	long long num, f;

	num = 612852475143;
	f = 2;

	while (f * f <= num)
	{
		if(num % f == 0)
			num /= f;
		else
			f++;
	}
	printf("%lld\n", num);
	return (0);
}
