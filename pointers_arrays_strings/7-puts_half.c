#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Imprime la moitié d'une chaîne de caractères.
 * @str: La chaîne à imprimer
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int start = len / 2;

	if (len % 2 == 1)
	{
		start = (len - 1) / 2 + 1;
	}
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
		_putchar('\n');
	}
}
