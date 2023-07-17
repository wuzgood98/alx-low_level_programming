#ifndef _dog_
#define _dog_

/**
 * struct dog - defines the name, owner and age of a dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: the name of the owner of the dog.
 *
 * Description: Set the type for the variable 'name' and 'owner' to char
 * and age to float.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif