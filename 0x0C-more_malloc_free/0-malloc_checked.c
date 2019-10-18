#inlude "holberton.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates mem using malloc
 * @b: amount of memory
 * Description: allcoates memory
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *P;

	p = malloc(b);
	if (p == 0)
		return (98);
	return (p);
}
