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
	int length = _strlen(dest);
	int i = 0;

	while (scr[i] != '\0')
	{
		dest[lenth + i] = src[i];
		i++
	}
	dest[length + i] = '\0';
}
