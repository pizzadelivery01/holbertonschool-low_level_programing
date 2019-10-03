B#include "holberton.h"
/**
 * _strcmp - compares strings
 * @s1: string
 * @s2: string
 *
 * Desripttion: compares strings
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++
	}
	return (0);
}
