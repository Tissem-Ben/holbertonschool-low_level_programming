#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Input string
 * @accept: Accepted characters
 *
 * Return: Number of bytes in the initial segment of s
 * consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				len++;
				break;
			}
		}
		if (!*a)
			break;
		s++;
	}
	return (len);
}
