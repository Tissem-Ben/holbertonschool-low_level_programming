#include "main.h"

/**
 * _sqrt_helper - Fonction
 * @x: Le nombre.
 * @i: Le diviseur courant.
 * Return 0
 */
int _sqrt_helper(int x, int i)
{
	if (i * i > x)
		return (-1);
	if (i * i == x)
		return (i);
	return (_sqrt_helpe (x, i + 1));
}

/**
 * _sqrt_recursion
 * @n: Le nombre.
 *
 * Return: La racine 
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_helper(n, 1));
}
