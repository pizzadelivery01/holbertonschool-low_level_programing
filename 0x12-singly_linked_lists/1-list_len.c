#include "lists.h"

/**
 * list_len - list len of list
 *
 * @h: head
 * Return: len
 */
size_t list_len(const list_t *h)
{
	int i;
	const list_t *temp;

	i = 0;
	temp = h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
