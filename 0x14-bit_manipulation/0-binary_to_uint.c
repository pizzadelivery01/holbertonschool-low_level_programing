B#include "holberton.h"
/**
 * binary_to_uint - binarty to uint conv
 * @b: stirng to binary numbers
 *
 * Description: binary to unsigned int
 * Return: 0 or converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i, j;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i + 1] != '\0')
	{
		if ((b[i] - '0') != (1 || 0))
			return (0);
		i++;
	}
	j = 1;
	num = 0;

	while (i >= 0)
	{
		num += (b[i] - '0') * j;

		j *= 2;
		i--;
	}
	return (num);
}
