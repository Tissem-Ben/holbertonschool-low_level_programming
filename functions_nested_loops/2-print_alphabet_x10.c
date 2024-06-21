#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int i;

		for (i = '0'; i <= '9'; i++)
		{
			for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			{
				_putchar(alphabet);
			}
			_putchar('\n');
		}
}
