#include <unistd.h>
#include "holberton.h"

/**
 * print_alphabet - entry point
 *
 * Desctiption: print_alphabet will print the english alphabet in lowercase
 *
 */

void print_alphabet(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
