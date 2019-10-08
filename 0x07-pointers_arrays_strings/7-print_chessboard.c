#include "holberton.h"
/**
 * print_chessboard - prints double arrays
 * @a: array
 * Description: prints chessboard of arrays
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int first = 0;
	int second;

	while (first < *a[first])
	{
		second = 0;

		while (second < 8)
		{
			_putchar (a[first][second]);
			second++;
		}
		_putchar ('\n');
		first++;
	}
}
