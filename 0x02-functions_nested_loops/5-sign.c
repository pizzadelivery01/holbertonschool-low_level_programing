#include "holberton.h"

/**
 * print_sign - determines if number is positive or negative
 * @n: int
 * Description: determines if number is + or -
 *
 * Return: variable dependant
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
