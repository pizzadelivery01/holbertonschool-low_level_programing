#include "holberton.h"
/**
 * *_strncpy - copies string to destination
 * @n: int
 * @dest: char
 * @src: char
 *
 * Description: copies string to destination
 *
 * Return: pointer to string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
