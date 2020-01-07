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
	dlistint_t *new, *prev, *temp;

	if (h == NULL)
		return (NULL);
	temp = *h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	if (idx > count)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *h;
	count = 0;
	while (count < idx)
	{
		count++;
		temp = temp->next;
	}
	prev = temp->prev;
	if (prev == NULL)
	{
		new->prev = NULL;
		new->next = temp;
		temp->prev = new;
	}
	else
	{
		new->next = temp;
		new->prev = prev;
		prev->next = new;
		temp->prev = new;
	}
	return (new);
}
