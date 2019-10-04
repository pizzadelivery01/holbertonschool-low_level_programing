#include "holberton.h"
/**
 * *string_toupper -  changes to upper
 * @str : input string
 *
 * Description: changes letters to uppercase
 *
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
