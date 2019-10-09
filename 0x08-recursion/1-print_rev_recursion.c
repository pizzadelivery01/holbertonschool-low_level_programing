#include "holberton.h"
/**
 * _print_rev_recursion - prints string backwords
 * @s: string
 * Description: another useless recursion that will never be used
 * Return: never
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
