#include "lists.h"

/**
 * free_list - frees linked list
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
