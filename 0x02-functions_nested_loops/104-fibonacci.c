#include <stdio.h>
/**
 * main - print first 98 fibonacci numbers
 *
 * Return: always 0
 */
int main(void)
{
	int c;
	unsigned long fb1 = 0, fb2 = 1, sum;
	unsigned long fb1_1, fb1_2, fb2_1, fb2_2;
	unsigned long h1, h2;

	for (c = 0; c < 92; c++)
	{
		sum = fb1 + fb2;
		printf("%lu, ", sum);

		fb1 = fb2;
		fb2 = sum;
	}

	fb1_1 = fb1 / 10000000000;
	fb2_1 = fb2 / 10000000000;
	fb1_2 = fb1 % 10000000000;
	fb2_2 = fb2 % 10000000000;

	for (c = 93; c < 99; c++)
	{
		h1 = fb1_1 + fb2_1;
		h2 = fb1_2 + fb2_2;
		if (fb1_2 + fb2_2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}

		printf("%lu%lu", h1, h2);
		if (c != 98)
			printf(", ");

		fb1_1 = fb2_1;
		fb1_2 = fb2_2;
		fb2_1 = h1;
		fb2_2 = h2;
	}
	printf("\n");
	return (0);
}
