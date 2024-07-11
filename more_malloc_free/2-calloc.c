#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: Number of elements.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL if allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory_block;
	if (nmemb == 0 || size == 0)
		return (NULL);
	memory_block = malloc(nmemb * size);
	if (memory_block == NULL)
		return (NULL);
	memset(memory_block, 0, nmemb * size);
	return (memory_block);
}
