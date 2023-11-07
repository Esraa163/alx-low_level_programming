#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog
 * @d: the dog to print
 *
 * Return: void.
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		ptintf("Name: %s\n", d->name ? d->name : "(nil)");
		ptintf("age: %f\n", d->age);
		ptintf("owner: %s\n", d->name ? d->name : "(nil)");
	}
}
