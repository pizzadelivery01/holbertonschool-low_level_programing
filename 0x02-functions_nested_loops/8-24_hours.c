#include "holberton.h"

/**
 * jack_bauer - print 24 hours by min
 *
 * Description: prints every min of the day
 *
 * Return: 0 always
 */

void jack_bauer(void)
{
	int first_hour = '0';
	int second_hour = '0';
	int first_min = '0';
	int second_min = '0';

	while (first_hour < '3')
	{
		while (second_hour < '5')
		{
			while (first_min < '7')
			{
				while (second_min <= '9')
				{
					_putchar(first_hour);
					_putchar(second_hour);
					_putchar(':');
					_putchar(first_min);
					_putchar(second_min);
					_putchar('\n');
					second_min++;
				}
				first_min++;
			}
			second_hour++;
		}
		first_hour++;
	}

}
