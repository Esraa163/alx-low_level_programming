#include "dog.h"

/**
 * init_dog - for initialize a dog
 * @d: the dog to init
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: just a lone doge struct in big kitty world
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
