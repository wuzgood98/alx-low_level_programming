#include <stdio.h>
/**
 * main - Print alphabets in lower case and uppercase then a new line.
 *
 * Return: always return 0
 */
int main(void)
{
	char lc = 'a', uc = 'A';

	// Print lowercase alphabet
	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}
	
	// Print uppercase alphabet
	while (uc <= 'Z')
	{
		putchar(uc);
		uc++;
	}

	// print a new line
	putchar('\n');
	return (0);
}
