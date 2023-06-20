#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: always return 0
 */
void jack_bauer(void)
{
	int h, i, j, k;

	for (h = 48; h <= 50; h++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (j = 48; j <= 53; j++)
			{
				for (k = 48; k <= 57; k++)
				{
					if (h >= 50 && i >= 52)
					{
						break;
					}
					_putchar(h);
					_putchar(i);
					_putchar(':');
					_putchar(j);
					_putchar(k);
					_putchar('\n');
				}
			}
		}
	}
}
