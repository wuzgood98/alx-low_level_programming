#include <stdio.h>
/**
 * main - Print all possible different combinations
 * of two digits.
 *
 * Return: always return 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			/* Print the first digit */
			putchar('0' + i);
			/* Print the second digit */
			putchar('0' + j);
			if (i < 8 || j < 9)
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
