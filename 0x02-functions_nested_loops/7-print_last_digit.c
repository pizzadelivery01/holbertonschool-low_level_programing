#include "holberton.h"

/**
 * print_last_digit -  prints last digit of number
 * @input: integer inputed
 *
 * Discription: function for finding just last number of number
 *
 * Return: integer
 */

int print_last_digit(int input)
{
	int last = input % 10;


	if (last < 0)
		last = (last * -1);
	_putchar(last + '0');
	return (last);
}
