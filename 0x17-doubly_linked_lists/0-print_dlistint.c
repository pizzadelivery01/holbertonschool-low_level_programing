#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *temp = NULL;

	temp = (dlistint_t *) h;
	while (temp)
	{
		i++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
