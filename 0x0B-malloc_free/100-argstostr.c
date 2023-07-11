#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count.
 * @av: pointer to the arguments.
 *
 * Return: NULL if ac == 0 or av == NULL or a pointer to a new string.
 */

char *argstostr(int ac, char **av)
{
	char *temp_av;
	int count = ac, a, b, i;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			count++;
	}

	temp_av = malloc(sizeof(char) * (count + 1));

	if (temp_av == NULL)
		return (NULL);

	i = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			temp_av[i++] = av[a][b];

		temp_av[i++] = '\n';
	}

	temp_av[count] = '\0';

	return (temp_av);
}
