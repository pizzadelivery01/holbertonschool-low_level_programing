#include "lists.h"
/**
 * sum_dlistint - adds all data from nodes
 * @head: pointer to top of begining of linked list
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = NULL;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
