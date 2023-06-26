#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random password
 *
 * Return: always 0
 */

int main(void)
{
	int idx, val = 0;
	time_t t;

	srand((unsigned int) time(&t));

	while (val < 2772)
	{
		idx = rand() % 128;
		if ((val + idx) > 2772)
			break;
		val = val + idx;
		printf("%c", idx);
	}
	printf("%c\n", (2772 - val));
	return (0);
}
