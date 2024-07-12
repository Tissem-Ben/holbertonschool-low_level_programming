#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Free memory allocated for a dog_t.
 * @d: Pointer to the dog_t.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
