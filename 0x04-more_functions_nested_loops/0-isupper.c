#include "holberton.h"

/**
 *
 * _isupper - entry point
 * @c: int
 *
 * Descrition: checks if letter is upper case
 *
 * Return: 1 if true
 */

int _isupper(int c)
{
	if (( c >= 'A') && ( c <= 'Z'))
		return (1);
	else
		return (0);
