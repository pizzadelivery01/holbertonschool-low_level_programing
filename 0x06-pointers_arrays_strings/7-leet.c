#include "holberton.h"
/**
 * *leet - replaces with 133t code
 * @str: char
 *
 * Description: replaces string wit 1337 text
 *
 * Return: changed string
 */

char *leet(char *str)
{
	int string = 0;
	int compare = 0;

	letters[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	numbers[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	while (str[string] != '\0')
	{
		while (compare <= 9)
		{
			if (str[string] == letters[compare])
			{
				str[string] = numbers[compare];
			}
			compare++;
		}
		string++;
	}
	return (str);
}
