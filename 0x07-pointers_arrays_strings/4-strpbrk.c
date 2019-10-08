#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - locates bytes in string
 * @s: input string
 * @accept: matching character
 *
 * Description: looks for matching byte and returns pointer to it
 *
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while ((*s != '\0') && (s != NULL))
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}
	if (accept == '\0')
		return (s);
	return (NULL);
}
