#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - Prints information about a dog
 * @d: Pointer to struct dogi
 *
 * Description: Prints the name, age, and owner of the dog.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
