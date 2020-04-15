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
	int result;

	result = binary_h(array, value, -1, size);
	if (result)
		return (result);
	return (-1);
}

/**
 * binary_h - helper for binary search
 * @array: array of ints
 * @match: value looking to match
 * @lower: lower limit
 * @highest: highest limit
 *
 *Return: index of match or -1
 */

int binary_h(int *array, int match, int lower, int highest)
{
	int i, mid;


	if (!array)
		return (-1);
	if (lower == highest || highest == 0)
		return (-1);
	printf("Searching in array: ");
	for (i = lower + 1; i < highest; i++)
	{
		printf("%d", array[i]);
		if (i + 1 < highest)
			printf(", ");
	}
	printf("\n");

	mid = (lower + highest) / 2;
	if (array[mid] == match)
		return (mid);
	if (array[mid] < match)
		return (binary_h(array, match, mid + 1, highest));
	else
		return (binary_h(array, match, lower, mid - 1));
}
