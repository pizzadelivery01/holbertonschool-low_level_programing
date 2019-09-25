#include "holberton.h"

/**
 * _islower -  is entry point
 * @c: int
 *
 * Description: checks if charater is lowercase
 * Return: is 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
