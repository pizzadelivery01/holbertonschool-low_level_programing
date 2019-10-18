#include "holberon.h"
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
	char *ary;
	int i = 0;

	if (size == 0)
		return (NULL);
	ary = malloc(size * sizeof(char));
	if (ary == NULL)
		return (NULL);
	while (i < size)
	{
		ary[i] = c;
		i++
	}
	return (ary);
}
