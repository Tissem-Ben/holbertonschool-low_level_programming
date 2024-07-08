#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - Duplicates a string
 * @str: the string to duplicate.
 *
 * Return: A pointer to the duplicated string, or or NULL if str is NULL
 *         or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *strdup_str;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;

	strdup_str = malloc((len + 1) * sizeof(char));
	if (strdup_str == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		strdup_str[i] = str[i];
	return (strdup_str);
}
