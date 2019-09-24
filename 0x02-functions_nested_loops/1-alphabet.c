#include "holberton.h"

/**
 *print_alphabet will print the english alphabet in lowercase
 *
 *no return void
 */

void print_alphabet(void)
{
	letter = 'a';

	while( letter <= 'z')
	{
		_putchar( letter);
		letter++;
	}
	_putchar( '\n');
}
