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
	int num1, num2;

	num1 = atoi(a);
	num2 = atoi(b);

	return (num1 + num2);
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
	int num1, num2;

	num1 = atoi(a);
	num2 = atoi(b);

	return (num1 - num2);
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
	int num1, num2;

	num1 = atoi(a);
	num2 = atoi(b);

	return (num1 * num2);
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
	int num1, num2;

	num1 = atoi(a);
	num2 = atoi(b);

	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (num1 / num2);
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
	int num1, num2;

	num1 = atoi(a);
	num2 = atoi(b);

	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (num1 % num2);
}
