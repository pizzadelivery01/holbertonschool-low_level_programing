#include "holberton.h"

/**
 * *_strcat - adding string to end of string
 *
 * @dest:string
 * @src: string
 *
 * Description: catting strings
 *
 * Return: pointer to combined string
 */

char *_strcat(char *dest, char *src)
{
		int length = 0;
		int x = 0;
		int i = 0;

		while (dest[x] != '\0')
		{
			length++;
			x++;
		}

	while (src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
