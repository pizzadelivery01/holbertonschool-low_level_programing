#include "holberton.h"

/**
 * _memset - setting up memmory locations
 * @s: address appointed for return
 * @b: how much memmory per character
 * @n: amount of memmory appointed
 *
 * Description: setting memmory locations
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
