#include "holberton.h"

/**
 * _strlen - evaluates string length
 * @s: char
 * @length : int
 * Desription: evaluates string length
 *
 * Return: integer
 */

int _strlen(char *s)
{

	for (int length = 0, s != "\0", s++)
		length++;
	return (length);
}
