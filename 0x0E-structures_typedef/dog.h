#ifndef _dog_
#define _dog_

/**
 * struct dog - defines the name, owner and age of a dog.
 * @name: name of dog.
 * @owner: the name of the owner of the dog.
 * @age: age of the dog.
 *
 * Description: Set the type for the variable 'name' and 'owner' to char
 * and age to float.
 */

struct dog
{
	char *name, *owner;
	float age;
}

#endif
