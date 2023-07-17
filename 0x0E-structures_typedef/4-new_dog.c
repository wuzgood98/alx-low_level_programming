#include "dog.c"
#include <stdio.h>

/**
 * _strlen - finds the length of a string
 * @s: string.
 *
 * Return: length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _strcpy - copy a string
 * @dest: where to copy the string to.
 * @src: source of the string to copy.
 * 
 * Return: copied string.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: NULL if the fuction fails, otherwise the struct of dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	new_dog = malloc(sizeof(struct dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if(new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->owner = _strcpy(new_dog->owner, owner);

	return (new_dog);
}
