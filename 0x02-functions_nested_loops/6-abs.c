#include "holberton.h"

/**
 * _abs - determines absolute value of number
 * @num: any integer
 *
 * Description: finds absolute values
 *
 * Return: 0
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (num * -1);
	}
	else if (num > 0)
		return (num);
	else
		return (0);
}
