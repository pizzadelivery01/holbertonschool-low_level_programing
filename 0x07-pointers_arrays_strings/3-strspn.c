#include "holberton.h"
/**
 * _strspn - searches string for how many macthing characters in a row
 * @s: string searched
 * @accept: list of matching characters
 *
 * Description: how many matching characters in a row from start of string is in
 * accepted list
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = _strlen(accept);
	unsigned int num = 0;
	int strcount = 0;
	int acceptcount = 0;

	while (s[strcount] != '\0')
	{
		acceptcount = 0;
		while (acceptcount <= len)
		{
			if (s[strcount] == accept[acceptcount])
			{
				num++;
				strcount++;
				break;
			}
			if (accept[acceptcount] == '\0')
			{
				return (num);
			}
			acceptcount++;
		}
	}
	return (num);
}

/**
 * _strlen - evaluates string length
 * @s: char
 *
 * Desription: evaluates string length
 *
 * Return: integer
 */

int _strlen(char *s)
{

	int length = 0;

while (*s != '\0')
{
	length++;
	s++;
}

return (length);
}
