#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit
 * numbers.
 *
 * Return: always return 0
 */
int main(void)
{
	int dgt;

	for (dgt = 48; dgt <= 57; dgt++)
	{
		putchar(dgt);
		if (dgt < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
