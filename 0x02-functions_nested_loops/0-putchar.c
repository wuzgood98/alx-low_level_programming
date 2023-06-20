#include <stdio.h>
#include "main.h"
/**
 * main - Program that prints _putchar,
 * followed by a new line
 *
 * Return: Always return 0
 */
int main(void)
{
	int char[8] = {95,112,117,116,99,104,97,114};
	int i, sz;

	sz = sizeof(char) / sizeof(char[0]);
	for (i = 0; i < sz; i++)
	{
		putchar(char[i]);
	}

	putchar('\n');
	return (0);
}
