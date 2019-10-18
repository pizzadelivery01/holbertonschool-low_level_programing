#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates and array and fills it with given char
 * @size: size of array
 * @c: char to be filled in array
 * Description: creates an array of the given size and initialized with char
 * Return: a pointer to array or null
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
