#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate.
 *
 * Return: Pointer to the concatenated string, NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated_string;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
		concatenated_string = malloc(sizeof(char) * (len1 + len2 + 1));
	else
		concatenated_string = malloc(sizeof(char) * (len1 + n + 1));
	if (concatenated_string == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concatenated_string[i] = s1[i];
	for (j = 0; s2[j] && j < n; j++)
		concatenated_string[i + j] = s2[j];
	concatenated_string[i + j] = '\0';
	concatenated_string[i + j] = '\0';
	return (concatenated_string);
}
