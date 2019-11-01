#include "lists.h"

/**
 * print_list - returns all linked list items
 * @h: head
 * Return: returns number of elements in list
 */
size_t print_list(const list_t *h)
{
	int i;
	const list_t *temp;

	i = 0;
	temp = h;
	for (i; temp != NULL; i++)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (i);
}
