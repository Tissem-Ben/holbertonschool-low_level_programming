#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number for which to find the square root
 *
 * Return: return -1 If n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	i = 1;
	while (i * i <= n)
	{
		if (i * i == n)
			return (i);
		i++;
	}
	return (-1);
}
