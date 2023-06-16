#include <stdio.h>
/**
 * main - Print alphabets in lowercase.
 *
 * Return: always return 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar("\n");
	return (0);
}
