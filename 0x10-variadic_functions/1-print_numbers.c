#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of parameters.
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int index;

	if (separator == NULL || n == 0)
		return;

	va_start(list, n);

	while (index < n)
	{
		printf("%d", va_arg(list, int));
		if (index < (n - 1))
			printf("%s", separator);
		index++;
	}

	printf("\n");
	va_end(list);
}
