#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * find_big_num - finds the biggest number
 * @usrn: username
 * @len: length of username
 *
 * Return: the biggest number
 */
int find_big_num(char *usrn, int len)
{
	int chr;
	int vch;
	unsigned int rand_num;

	chr = *usrn;
	vch = 0;

	while (vch < len)
	{
		if (chr < usrn[vch])
			chr = usrn[vch];
		vch += 1;
	}

	srand(chr ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * mul_char - multiplies each char of username
 * @usrn: username
 * @len: length of username
 *
 * Return: multiplied char
 */
int mul_char(char *usrn, int len)
{
	int chr;
	int vch;

	chr = vch = 0;

	while (vch < len)
	{
		chr = chr + usrn[vch] * usrn[vch];
		vch += 1;
	}

	return (((unsigned int)chr ^ 239) & 63);
}

/**
 * gen_char - generates a random char
 * @usrn: username
 *
 * Return: a random char
 */
int gen_char(char *usrn)
{
	int chr;
	int vch;

	chr = vch = 0;

	while (vch < *usrn)
	{
		chr = rand();
		vch += 1;
	}

	return (((unsigned int)chr ^ 229) & 63);
}

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int chr, len = 0, vch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	while (argv[1][len])
		len++;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	/* ----------- f2 ----------- */
	chr = vch = 0;
	while (vch < len)
	{
		chr = chr + argv[1][vch];
		vch = vch + 1;
	}
	keygen[1] = ((char *)alph)[(chr ^ 79) & 63];
	/* ----------- f3 ----------- */
	chr = 1;
	vch = 0;
	while (vch < len)
	{
		chr = argv[1][vch] * chr;
		vch = vch + 1;
	}
	keygen[2] = ((char *)alph)[(chr ^ 85) & 63];
	/* ----------- find_big_num ----------- */
	keygen[3] = ((char *)alph)[find_big_num(argv[1], len)];
	/* ----------- mul_char ----------- */
	keygen[4] = ((char *)alph)[mul_char(argv[1], len)];
	/* ----------- gen_char ----------- */
	keygen[5] = ((char *)alph)[gen_char(argv[1])];
	keygen[6] = '\0';
	for (chr = 0; keygen[chr]; chr++)
		printf("%c", keygen[chr]);
	return (0);
}
