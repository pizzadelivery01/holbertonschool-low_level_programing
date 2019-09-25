#include "holberton.h"

/**
 * _isalpha - is entry point
 * @c: int
 *
 * Description: checks if charater is lowee or uppercase
 * Return: is 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
