#include "search_algos.h"

/**
 * linear_search - seraches for a value in an array of intergers linearly
 * @array: pointer to array first element
 * @size: size of array
 * @value: value searching for
 * Return: index where first value found
 */

int linear_search(int *array, size_t size, int value)
{
	if (array)
		for (i = 0; i <= size; i++)
		{
			printf("Value checked array[{}] = [{}]".format(
				       i, array[i]));
			if (value ==  array[i])
			{
				printf("Found {} at index: {}".format(value, i));
				return (i);
			}
		}
	return (-1);
}
