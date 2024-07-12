#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - Represents a dog
 * @name: (char *)
 * @age: (float)
 * @owner: (char *)
 *
 * Description: Stores basic information about a dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* DOG_H */
