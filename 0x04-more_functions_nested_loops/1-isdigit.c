#include "holberton.h"

/**
 *
 * _isdigit - entry point main function
 * @c: integer
 *
 * Description: checks to see if input is a number 0-9
 *
 * Return: 1 if true
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c >= '9'))
		return (1);
	else
		return (0);

}
