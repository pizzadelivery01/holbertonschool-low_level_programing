B#include "holberton.h"

/**
 * reverse_array - reverse order of an array
 * @a: int
 * @n: int
 *
 * Description: reverse order of given array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n = n - 1;

	while (i < '\0')
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;

		i++;
		n--;
	}
}
