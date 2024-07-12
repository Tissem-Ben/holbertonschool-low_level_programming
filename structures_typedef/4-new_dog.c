#include <stdlib.h>
#include "dog.h"


/**
 * new_dog - Creates a new dog.
 * @name: Pointer to string containing the dog's name.
 * @age: Age of the dog.
 * @owner: Owner's name.
 *
 * Return: Pointer to the newly created dog_t structure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	size_t name_len = 0, owner_len = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	new_dog->name = malloc((name_len + 1) * sizeof(char));
	new_dog->owner = malloc((owner_len + 1) * sizeof(char));

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (size_t i = 0; i <= name_len; i++)
		new_dog->name[i] = name[i];
	for (size_t i = 0; i <= owner_len; i++)
		new_dog->owner[i] = owner[i];

	new_dog->age = age;

	return (new_dog);
}
