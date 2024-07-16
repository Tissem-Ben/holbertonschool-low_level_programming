#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: The array of integers.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparaison function.
 *
 * Return: the cmp function does not return 0
 *         If no element matches, return -1.
 *         If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);

	return (-1);
}
