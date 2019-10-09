#include "holberton.h"
/**
 * _puts_recursion - prints strings by character recursion
 * @s: string
 * Description: prints strings by recursion which is completely useless
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
		_putchar('\n');
}
