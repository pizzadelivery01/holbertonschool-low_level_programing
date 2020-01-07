#include "lists.h"
/**
 * free_dlistint - free the entire linked list
 * @head: pointer to head of list
 * Return : nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
