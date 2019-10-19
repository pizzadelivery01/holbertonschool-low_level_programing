#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory and files with 0
 * @nmemb: size of array
 * @size: size of memory block
 * Description: building calloc
 * Return: pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
