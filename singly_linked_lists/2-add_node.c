#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - Computes the length of a string.
 * @s: The string whose length is to be computed.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(const char *s)
{
	unsigned int length = 0;

	while (s[length] != '\0')
		length++;

	return length;
}

/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL if it failed.
 */
char *_strdup(const char *str)
{
	char *dup;
	unsigned int len, i;

	if (str == NULL)
		return NULL;

	len = 0;
	while (str[len] != '\0')
		len++;

	dup = malloc(len + 1);
	if (dup == NULL)
		return NULL;

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';

	return dup;
}

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_str = _strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = new_str;
	new_node->len = _strlen(new_str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
