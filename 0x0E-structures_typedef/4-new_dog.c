#include "dog.c"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

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
	int index = 0;

	while (index >= 0)
	{
		dest[index] = src[index];
		if (src[index] == '\0')
			break;
		index++;
	}

	return (dest);
}

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: NULL if the fuction fails, otherwise the new struct of dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *perro;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	perro = malloc(sizeof(dog_t));
	if (perro == NULL)
		return (NULL);

	perro->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (perro->name == NULL)
	{
		free(perro);
		return (NULL);
	}

	perro->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (perro->owner == NULL)
	{
		free(perro);
		free(perro->name);
		return (NULL);
	}

	perro->name = _strcpy(perro->name, name);
	perro->age = age;
	perro->owner = _strcpy(perro->owner, owner);

	return (perro);
}
