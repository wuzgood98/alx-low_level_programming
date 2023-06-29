#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to be printed
 * @size: number of bytes to be printed from the buffer (b)
 *
 * Return: nothing
 */

void print_buffer(char *b, int size)
{
	int m, n, o;

	if (size <= 0)
		printf("\n");
	else
	{
		for (m = 0; m < size; m += 10)
		{
			printf("%08x", m);
			for (n = m; n < m; n++)
			{
				if (n % 2 == 0)
					printf(" ");
				if (n < size)
					printf("%02x", b[n]);
				else
					printf(" ");
			}
			printf(" ");
			for (o = m; o < m + 10; o++)
			{
				if (o >= size)
					break;
				if (b[o] <= 31 || b[o] >= 127)
					printf("%c", '.');
				else
					printf("%c", b[o]);
			}
			printf("\n");
		}
	}
}
