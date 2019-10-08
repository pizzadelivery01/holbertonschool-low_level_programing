#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - changes pointer in str
 * @s: input string
 * @c: matching character
 *
 * Description: looks for matching character and returns pointer to it
 *
 * Return: pointer
 */

char *_strchr(char *s, char c)
{

	while ((*s != '\0') && (s != NULL))
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == '\0')
		return (s);
	return (NULL);
}
