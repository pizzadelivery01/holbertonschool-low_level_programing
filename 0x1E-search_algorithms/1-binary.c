#include "search_algos.h"

/**
 * binary_search - search for value in list using binary search
 * @array: pointer to first element
 * @size: size of array
 * @value: value searching for
 *
 *Return: index of array which found or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = 0, m = 0, i = 0;

	if (array == NULL || size == 0)
		return (-1);
	r = size - 1;

	while (l <= r)
	{
		i = 0;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
			if (i == r)
			{
				printf("%d\n", array[r]);
				break;
			}
			else
				printf("%d, ", array[i]);
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
