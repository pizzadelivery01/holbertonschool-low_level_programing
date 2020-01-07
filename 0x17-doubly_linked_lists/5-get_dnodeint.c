#include "lists.h"
/**
 * get_dnodeint_at_index - gets node at index
 * @head: pointer to top of linked list
 * @index: index of node wanted
 * Return: pointer to indexed node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	temp = malloc(sizeof(dlistint_t));
	temp = head;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	if (index > count)
		return (NULL);
	count = 0;
	temp = head;
	while (count < index)
	{
		count++;
		temp = temp->next;
	}
	return (temp);
}
