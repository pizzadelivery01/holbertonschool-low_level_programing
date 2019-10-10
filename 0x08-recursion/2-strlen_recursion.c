#include "holberton.h"
/**
 * _strlen_recursion - counts string length
 * @s: string
 * Description: useless recusion string len
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
