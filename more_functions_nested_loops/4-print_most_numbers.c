#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - check the code
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
			continue;
		else
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
