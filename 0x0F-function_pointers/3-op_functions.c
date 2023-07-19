#include "3-calc.h"

/**
 * op_add - adds two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: the result of the sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference between two numbers.
 * @a: first number.
 * @b: seconde number.
 *
 * Return: difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b.
 * @a: first number.
 * @b: second number.
 *
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the result of the division of a by b.
 * @a: first number.
 * @b: second number.
 *
 * Return: the result of the division of a by b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - return the remainder of the division of a by b.
 * @a: first number.
 * @b: second number.
 *
 * Return: the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
