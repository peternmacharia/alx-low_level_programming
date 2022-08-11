#include "lists.h"

/**
 * free_list - free a `list_t` list
 * @head: head of linked list
 *
 * Return: no return
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
