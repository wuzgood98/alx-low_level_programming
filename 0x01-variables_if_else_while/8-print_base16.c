#include <stdio.h>
/**
 * main - print all the numbers of base 16 in lowercase, followed by a new line.
 *
 * Return: always return 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 98; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
