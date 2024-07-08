#include <stdlib.h>
#include "main.h"

/**
 * create_array - an array of chars, and initializes it with a specific char.
 * @size: the size of the array to create
 * @c: the character to initialize each element of the array
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
