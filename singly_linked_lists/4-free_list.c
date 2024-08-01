#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function frees all nodes of a singly linked list
 *               and the strings within them.
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;  /* Move to the next node */
		free(temp->str);    /* Free the string in the current node */
		free(temp);         /* Free the current node */
	}
}
