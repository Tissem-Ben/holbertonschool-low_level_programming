#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 *
 * @s: the pointer to the null-terminates string.
 * Return: The length of the string (excluding the null terminator).
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
