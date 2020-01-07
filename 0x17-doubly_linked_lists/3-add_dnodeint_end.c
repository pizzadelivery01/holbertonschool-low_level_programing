#include "lists.h"

/**
 * add_dnodeint_end - adds node to end of list
 * @head: pointer to head of list
 * @n: number stored in node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		new->prev = current;
		new->next = NULL;
		current->next = new;
	}
	return (new);
}
