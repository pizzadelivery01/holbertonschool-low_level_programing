B#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - creates an array of ints
 * @min: min range
 * @max: max range
 * Description: creates an array of ints from min to max
 * Returns: pointer or NULL
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	if (max - min == 0)
	{
		p = malloc(sizeof(int));
		p[0] = min;
	}
	else
	{
		p = malloc(sizeof(int) * (max - min + 1));
		if (p == NULL)
			return (NULL);
		for (i = 0; min <= max; i++, min++)
			p[i] = min;
	}
	return (p);
}
