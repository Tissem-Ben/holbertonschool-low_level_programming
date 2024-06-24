#include "main.h"
#include <stdio.h>
/**
 * more_numbers - check the code
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar('0' + c / 10);
			}
			_putchar('0' + c % 10);
		}
		_putchar('\n');
	}
}
