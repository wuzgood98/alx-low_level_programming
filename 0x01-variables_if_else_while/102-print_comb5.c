#include <stdio.h>
/**
 * main - Print all possible combinations of two two-digit
 * numbers
 *
 * Return: always return 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			/* Print the tens digit of the first number */
			putchar('0' + i / 10);
			/* Print the ones digit of the first number */
			putchar('0' + i % 10);
			/* Print the space separator */
			putchar(' ');
			/* Print the tens digit of the second number */
			putchar('0' + j / 10);
			/* Print the ones digit of the second number */
			putchar('0' + j % 10);
			if (i != 99 || j != 99)
			{
				/* Print the comma separator */
				putchar(',');
				/* Print the space separator */
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
