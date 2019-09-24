#include <unistd.h>
#include "holberton.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Desctiption: print_alphabet_x10 will print the english alphabet ten times
 *
 */

void print_alphabet_x10(void)
{
	char letter;
	int repeat = 1;

	while (repeat <= 10)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		repeat++;
	}
}
