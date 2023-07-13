#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _iszero - determines if any number is zero
 * @argv: pointer to the arguments.
 *
 * Return: nothing.
 */

void _iszero(char *argv[])
{
	int i, num1 = 1, num2 = 1;

	for (i = 0; argv[1][i]; i++)
	{
		if (argv[1][i] != '0')
		{
			num1 = 0;
			break;
		}
	}

	for (i = 0; argv[2][i]; i++)
	{
		if (argv[2][i] != '0')
		{
			num2 = 0;
			break;
		}
	}

	if (num1 == 1 || num2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _init_array - set memory to 0 in a new array.
 * @arr: char array.
 * @length: length of the array.
 *
 * Return: pointer of a char array.
 */

char *_init_array(char *arr, int length)
{
	int i = 0;

	for (i = 0; i < length; i++)
		arr[i] = '0';
	arr[length] = '\0';
	return (arr);
}

/**
 * _numlen - determines length of the number
 * and checks if number is in base 10.
 * @argv: arguments vector.
 * @row: row of the array.
 *
 * Return: length of the number.
 */

int _numlen(char *argv[], int row)
{
	int line;

	for (line = 0; argv[row][line]; line++)
		if (!isdigit(argv[row][line]))
		{
			printf("Error\n");
			exit(98);
		}

	return (line);
}

/**
 * main - multiplies two numbers.
 * @argc: arguments count.
 * @argv: pointer to the arguments.
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int n1, n2, n_out, add, addn, idx, j, k, ch;
	char *nums;

	if (argc < 3)
		printf("Error\n"), exit(98);
	n1 = _numlen(argv, 1), n2 = _numlen(argv, 2);
	_iszero(argv), n_out = n1 + n2, nums = malloc(n_out + 1);
	if (nums == NULL)
		printf("Error\n"), exit(98);
	nums = _init_array(nums, n_out);
	k = n_out - 1, i = n1 - 1, j = n2 - 1, ch = addn = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addn > 0)
			{
				add = (nums[k] - '0') + addn;
				if (add > 9)
					nums[k - 1] = (add / 10) + '0';
				nums[k] = (add % 10) + '0';
			}
			i = n1 - 1, j--, addn = 0, ch++, k = n_out - (1 + ch);
		}
		if (j < 0)
		{
			if (nums[0] != '0')
				break;
			n_out--;
			free(nums), nums = malloc(n_out + 1), nums = _init_array(nums, n_out);
			k = n_out - 1, i = n1 - 1, j = n2 - 1, ch = addn = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nums[k] - '0') + addn;
			addn = add / 10, nums[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", nums);
	return (0);
}
