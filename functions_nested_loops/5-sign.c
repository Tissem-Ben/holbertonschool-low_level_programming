#include "main.h"

/**
* print_sign -prints the sign of anumber
* @n: the number to check (positive, zero, or negative)
*
* Return: 1 if n is greter than zero,
* 0 if n is zero,
* 1 if n is less than zero
*/
int print_sign(int n)
{
		if (n >	0)
		{
		_putchar('+');
		return	(1);
		}
		else if	(n == 0)
		{
		_putchar('0');
		return	(0);
		}
		else
		{
		_putchar('-');
		return	(-1);
		}
}
