#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
char *init_array(int size);
char *iterate(char *str);
void product(char *prod, char *mult, int digit, int zeroes);
void add_digits(char *prod1, char *prod2, int len);

/**
 * _strlen - Finds the length of a string.
 * @s: The string to be measured.
 *
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}

/**
 * init_array - Creates an array of chars and initializes it with
 * the character 'x'.
 * @size: size of the array.
 *
 * Return: pointer to the array.
 */
char *init_array(int size)
{
	char *array;
	int i;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (i = 0; i < (size - 1); i++)
		array[i] = 'x';

	array[i] = '\0';

	return (array);
}

/**
 * iterate - iterates through a string of numbers containing
 * leading zeroes until it hits a non-zero number.
 * @str: the string of numbers to be iterated.
 *
 * Return: pointer to the next non-zero element.
 */
char *iterate(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * to_int - converts a digit character to a corresponding int.
 * @c: The chara to be converted.
 *
 * Return: the converted digit.
 */
int to_int(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * product - multiplies a string of numbers by a single digit.
 * @prod: the buffer to store the result.
 * @mult: the string of numbers.
 * @digit: the single digit.
 * @zeroes: number of leading zeroes.
 *
 * Return: nothing.
 */
void product(char *prod, char *mult, int digit, int zeroes)
{
	int len, num, tens = 0;

	len = _strlen(mult) - 1;
	mult += len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; len >= 0; len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_digits - Adds the numbers stored in two strings.
 * @prod1: The buffer storing the running final product.
 * @prod2: The next product to be added.
 * @len: The length of next_prod.
 */
void add_digits(char *prod1, char *prod2, int len)
{
	int num, tens = 0;

	while (*(prod1 + 1))
		prod1++;

	while (*(prod2 + 1))
		prod2++;

	for (; *prod1 != 'x'; prod1--)
	{
		num = (*prod1 - '0') + (*prod2 - '0');
		num += tens;
		*prod1 = (num % 10) + '0';
		tens = num / 10;

		prod2--;
		len--;
	}

	for (; len >= 0 && *prod2 != 'x'; len--)
	{
		num = (*prod2 - '0');
		num += tens;
		*prod1 = (num % 10) + '0';
		tens = num / 10;

		prod1--;
		prod2--;
	}

	if (tens)
		*prod1 = (tens % 10) + '0';
}

/**
 * main - multiplies two positive numbers.
 * @argc: arguments count.
 * @argv: pointer to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *prod1, *prod2;
	int size, i, num, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = _strlen(argv[1]) + _strlen(argv[2]);
	prod1 = init_array(size + 1);
	prod2 = init_array(size + 1);

	for (i = _strlen(argv[2]) - 1; i >= 0; i--)
	{
		num = to_int(*(argv[2] + i));
		product(prod2, argv[1], num, zeroes++);
		add_digits(prod1, prod2, size - 1);
	}
	for (i = 0; prod1[i]; i++)
	{
		if (prod1[i] != 'x')
			putchar(prod1[i]);
	}
	putchar('\n');

	free(prod2);
	free(prod1);

	return (0);
}
