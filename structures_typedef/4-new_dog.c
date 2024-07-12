#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calculates the length of a string.
 * @str: The string whose length is to be calculated.
 *
 * Return: The length of the string.
 */
size_t _strlen(char *str)
{
	size_t len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * _strcpy - Copies a string to a buffer.
 * @dest: The buffer to copy the string to.
 * @src: The string to copy.
 *
 * Return: Pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	size_t i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: Pointer to string containing name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to string containing owner's name.
 *
 * Return: Pointer to the newly created dog_t structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	size_t name_len, owner_len;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	new_dog->name = malloc((name_len + 1) * sizeof(char));
	new_dog->owner = malloc((owner_len + 1) * sizeof(char));

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}

