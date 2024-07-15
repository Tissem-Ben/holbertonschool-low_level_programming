#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a given function.
 * @array: The array of integers.
 * @size: The size of the array.
 * @action: A pointer to the function to execute.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{

		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
