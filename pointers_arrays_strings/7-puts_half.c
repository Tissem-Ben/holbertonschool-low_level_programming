#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: the string to measure
 *
 * Return: The length of the string as an integer
 */
int _strlen(char *s)
{
	int len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * puts_half - Imprime la moitié d'une chaîne de caractères, suivie d'un saut de ligne
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
