#include "holberton.h"
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
	int i = 0;

	while (s[i] <= '\0')
	{
		if (s[i] == c || s[i] == '\0')
			return (s);
		s++;
		i++;
	}
	return (s);
}
