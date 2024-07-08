#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - Duplicates a string
 * @str: the string to duplicate.
 *
 * Return function returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *strdup_str;
	unsigned int len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	strdup_str = malloc((len + 1) * sizeof(char));
	if (strdup_str == NULL)
		return (NULL);
	strcpy(strdup_str, str);
	return (strdup_str);
}
