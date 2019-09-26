#include "holberton.h"

/**
 * print_most_numbers -  entry point fo function
 *
 * Descrtiption: prints numbers 0-9 except 2 and 4
 *
 *
 * Return: nothing
 */

void print_most_numbers(void);
{
	int i = '0';

	while  (i <= '9')
	{
		if ((i == '2') || (i == '4'))
		{
			continue;
		}
		else
			_putchar(i + '0');
		i++;
	}
}
