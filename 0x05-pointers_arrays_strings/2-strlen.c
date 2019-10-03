#include "holberton.h"

/**
 * _strlen - evaluates string length
 * @s: char
 *
 * Desription: evaluates string length
 *
 * Return: integer
 */

int _strlen(char *s)
{
	for (length = 0, s != "\0", s++)
		length++;
	return (length);
}
