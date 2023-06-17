#include <stdio.h>
/**
 * main - Print all possible different combinations
 * of three digits
 *
 * Return: always return 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				/* Print the first digit */
				putchar('0' + i);
				/* Print the second digit */
				putchar('0' + j);
				/* Print the third digit */
				putchar('0' + k);
				if (i < 7 || j < 8 || k < 9)
				{
					/* Print the comma separator */
					putchar(',');
					/* Print the space separator */
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
