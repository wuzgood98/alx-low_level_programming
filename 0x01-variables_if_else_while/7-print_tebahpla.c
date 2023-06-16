#include <stdio.h>
/**
 * main - Print the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: always return 0
 */
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
