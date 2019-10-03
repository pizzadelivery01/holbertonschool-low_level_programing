#include "holberton.h"

/**
 * *_strncat - adding string to end of string
 *
 * @dest:string
 * @src: string
 * @n: int
 * Description: catting strings
 *
 * Return: pointer to combined string
 */

char *_strncat(char *dest, char *src, int n)
{
		int length = 0;
		int x = 0;
		int i = 0;

		while (dest[x] != '\0')
		{
			length++;
			x++;
		}

		while ((src[i] != '\0') && (i < n))
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
