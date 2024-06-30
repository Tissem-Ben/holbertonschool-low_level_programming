#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be modified
 *
 * Return: Pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
					str[i] == ',' || str[i] == ';' || str[i] == '.' ||
					str[i] == '!' || str[i] == '?' || str[i] == '"' ||
					str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}') &&
				(str[i + 1] >= 'a' && str[i + 1] <= 'z'))
		{
			str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}


