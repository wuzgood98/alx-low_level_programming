#include "main.h"
#include <stdlib.h>

/**
 * count_words - count the number of words in the string.
 * @str: string to count.
 *
 * Return: number of words.
 */

int count_words(char *str)
{
	int count = 0, is_word = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
			is_word = 0;
		else if (is_word == 0)
		{
			is_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * get_word - get the words in the string.
 * @str: words.
 * @index: index of every word.
 *
 * Return: words in the string.
 */

char *get_word(char *str, int *index)
{
	int start = *index, length, i;
	char *word;

	while (str[*index] != ' ' && str[*index] != '\0')
		(*index)++;

	length = *index - start;
	word = malloc(sizeof(char) * (length + 1));

	if (word == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		word[i] = str[start + i];
	word[i] = '\0';

	return (word);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: NULL if str == null or str == "",
 * otherwise a pointer to an array of strings.
 */

char **strtow(char *str)
{
	char **words, *word;
	int num_words, word_index = 0, str_index = 0, i;

	if (str == NULL || *str == '\0' || (*str == ' ' && *(str + 1) == '\0'))
		return (NULL);

	num_words = count_words(str);
	words = malloc(sizeof(char *) * (num_words + 1));

	if (words == NULL)
		return (NULL);

	while (str[str_index] != '\0')
	{
		if (str[str_index] == ' ')
		{
			str_index++;
			continue;
		}

		word = get_word(str, &str_index);

		if (word == NULL)
		{
			for (i = 0; i < word_index; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}

		words[word_index] = word;
		word_index++;
	}
	words[word_index] = NULL;

	return (words);
}
