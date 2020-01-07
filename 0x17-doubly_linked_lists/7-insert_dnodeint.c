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
	dlistint_t *temp;
	unsigned int count = 0;
	dlistint_t *new;

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
	temp = *h;
	count = 0;
	while (count < idx)
	{
		count++;
		temp = temp->next;
	}
	new->n = n;
	new->next = temp->next;
	new->prev = temp->prev;
	temp->next->prev = new;
	temp->prev->next = new;
	return (new);
}
