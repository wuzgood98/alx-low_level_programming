#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	unsigned int index = 0, j, c = 0;
	char *s = "";
	va_list args;
	const char arg_types[] = "cifs";

	va_start(args, format);
	while (format && format[index])
	{
		j = 0;
		while (arg_types[j])
		{
			if (format[index] == arg_types[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[index])
		{
			case 'c':
				printf("%c", va_arg(args, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), c = 1;
				break;
			case 's':
				s = va_arg(args, char *), c = 1;
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		} index++;
	}
	printf("\n"), va_end(args);
}
