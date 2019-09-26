#include "holberton.h"

/**
 * print_numbers - main entry point for function
 *
 * Description: prints 0-9
 *
 * Return: no return
 */

void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
