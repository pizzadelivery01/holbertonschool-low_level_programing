#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node in list at index
 * @h: pointer to head
 * @idx: index to which to insert
 * @n: value of node inserted
 * Return: pointer to node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new, *next, *temp;

	if ((*h == NULL) && (idx != 0))
		return (NULL);
	if (idx != 0)
	{
		temp = *h;
		for (count = 0; count < idx -1 && temp != NULL; count++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = temp;
		next = temp->next;
		temp->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		new->next->prev = new;
	return(new);
}
