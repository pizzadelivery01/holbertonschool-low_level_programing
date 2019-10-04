#include "holberton.h"
/**
 * *cap_string - capitalize all words in a string.
 * @str: input string
 *
 * Description: takes all words and capatilizes them
 *
 * Return: string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\t' ||
		    str[i - 1] == '\n' || str[i - 1] == ',' ||
		    str[i - 1] == ';' || str[i - 1] == '.' ||
		    str[i - 1] == '!' || str[i - 1] == '?' ||
		    str[i - 1] == '"' || str[i - 1] == '(' ||
		    str[i - 1] == ')' || str[i - 1] == '{' ||
		    str[i - 1] == '}') && (str[i] >= 'a' &&
					   str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
