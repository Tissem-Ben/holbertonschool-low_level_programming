#include "main.h"
#include <stddef.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int started = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			started = 1;
			_putchar('1');
		}
		else if (started)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
