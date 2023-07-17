#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type dog.
 * @struct dog d: structure of the dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		exit(98);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
