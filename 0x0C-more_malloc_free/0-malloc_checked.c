#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - allocates mem using malloc
 * @b: amount of memory
 * Description: allcoates memory
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == 0)
		exit(98);
	return (p);
}
