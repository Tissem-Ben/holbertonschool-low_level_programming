#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followes by a new line to stdout.
 * @str: the string to print.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	putchar('\n');
}
