#include "variadic_functions.h"

/**
 * print_strings - print strings followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: number of parameters.
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int index;
	char *string;

	va_start(strings, n);

	while (index < n)
	{
		string = va_arg(strings, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (separator != NULL && (index < (n - 1)))
			printf("%s", separator);
		index++;
	}

	va_end(strings);
	printf("\n");
}
