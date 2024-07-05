#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number for which to find the square root
 *
 * Return: return -1 If n does not have a natural square root
 */
int _sqrt_recursion(int x, int i)
{
	int square;

	square = i * i;
	if (square >= x)
	{
		return (i);
	}
	else
	{
		return (_sqrt(x, i + 1));
	}
}
/**
 * hai - helper function, recursive steps taken
 * @n: number given to original function is_prime_number
 * @d: incrementer divisor
 * Return: 0 if not prime, 1 if prime
 */
int hai(int n, int d)
{
	if (n % d == 0)
	{
		return (0);
	}
	else if (_sqrt(n, 1) < d)
	{
		return (1);
	}
	else
	{
		return (hai(n, d + 1));
	}
}
/**
 * is_prime_number - determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (hai(n, 2));
	}
}
