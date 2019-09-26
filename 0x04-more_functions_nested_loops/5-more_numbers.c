#include "holberton.h"

/**
 * more_numbers -  entry point for function
 *
 * Description: prints 0 - 14 ten times
 *
 * Return: never
 */

void more_numbers(void)
{
	int loop = 0;
	int count;
	int fn;
	int sn;

	while (loop <= 9)
	{
		count = 0;

		while (count <= 14)
		{
			fn = (count / 10);
			sn = (count % 10);

			if (fn + '0' == '1')
			{
				_putchar(fn + '0');
			}
			_putchar(sn + '0');
			count++;
		}

		_putchar('\n');
		loop++;
	}
}
