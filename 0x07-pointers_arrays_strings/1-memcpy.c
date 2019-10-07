#include "holberton.h"

/**
 * _memcpy - setting up memmory locations
 * @dest: end string
 * @src: where to copy from
 * @n: amount to be copied
 *
 * Description: setting memmory locations
 *
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
