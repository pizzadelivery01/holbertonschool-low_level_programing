#include "holberton.h"

/**
 * swap_int - swap two integer variables
 * @a: int
 * @b: int
 *
 *Description: swaps integer values
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
