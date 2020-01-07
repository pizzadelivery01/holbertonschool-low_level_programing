#include "lists.h"

/**
 * size_t dlistint_len - counts number of elements in a list
 * @h: point to head of list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *temp = NULL;

	if (h == NULL)
		return (0);

	temp = (dlistint_t *) h;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
