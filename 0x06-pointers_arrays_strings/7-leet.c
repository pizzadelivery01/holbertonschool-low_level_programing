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
	int string_count = 0;
	int compare = 0;

	int letters[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	int numbers[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	while (str[string_count] != '\0')
	{
		compare = 0;
		while (compare <= 9)
		{
			if (str[string_count] == letters[compare])
			{
				str[string_count] = numbers[compare];
			}
			compare++;
		}
		string_count++;
	}
	return (str);
}
