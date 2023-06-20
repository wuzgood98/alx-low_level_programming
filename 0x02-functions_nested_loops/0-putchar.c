#include "main.h"
/**
 * main - Program that prints _putchar,
 * followed by a new line
 *
 * Return: Always return 0
 */
int main(void)
{
	int chr[8] = {95,112,117,116,99,104,97,114};
	int i, sz;

	sz = sizeof(chr) / sizeof(chr[0]);
	for (i = 0; i < sz; i++)
	{
		putchar(chr[i]);
	}

	putchar('\n');
	return (0);
}
