#include "holberton.h"

/**
 * issqrt - checks if number has a square root
 * @i: int
 * @s: int
 *
 * Description: checks number if int is a square root
 * Return: int
 */

int issqrt(int i, int s)
{
	if (i * i == s)
		return (i);
	if (i * i > s)
		return (-1);
	return (issqrt(i + 1, s));
}

/**
 * _sqrt_recursion - returns sqrt if available
 * @n: int
 *
 * Description: useless recursion square root finder
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (issqrt(1, s));
}
