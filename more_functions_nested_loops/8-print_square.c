#include "main.h"
#include <stdio.h>
/**
 * print_square - check the code
 * @size: the size of the square
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			if (i != size - 1)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
