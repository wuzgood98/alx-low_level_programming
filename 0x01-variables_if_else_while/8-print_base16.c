#include <stdio.h>
/**
 * main - print all the numbers of base 16 in lowercase, followed by a new line.
 *
 * Return: always return 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			/* Convert to character using ASCII values */
			putchar('O' + i);
		}
		else
		{
			/* Convert to lowercae hexadecimal character */
			putchar('a' + (i - 10));
		}
	}
	putchar('\n');
	return (0);
}
