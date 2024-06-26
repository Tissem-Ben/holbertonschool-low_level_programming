#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: Pointer to the first integer
 * @b: pointer to the second integer
 */
void swap_int(int *a, int *b)
{
	int tem;

	tem = *a;
	*a = *b;
	*b = tem;
}
