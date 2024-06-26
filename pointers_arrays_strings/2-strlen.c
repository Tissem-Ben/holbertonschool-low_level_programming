#include "main.h"
#include <stdio.h>

/**
 * _strlen - swaps the values of two integers
 *
 * @s: Pointer to the first integer
 */
int _strlen(char *s)
{
	        int len = 0;
		while (s[len] != '\0')
		{
			len++;
		}
		return len;
}
