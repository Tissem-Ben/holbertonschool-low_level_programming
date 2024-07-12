#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a dog
 * @d: pointer to struct dog
 * @name: (char *)
 * @age: (float)
 * @owner: (char *)
 *
 * Description: initialializes a struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
