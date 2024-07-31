#include "lists.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose length is to be computed.
 *
 * Return: The length of the string.
 */
size_t _strlen(const char *s)
{
	size_t length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}
