50
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
	int fh = '0', sh = '0', fm = '0', sm = '0';
	/* starts time*/
	while (fh < '3')
	{
		while (sh <= '9' && fh < '3')
		{
			while (fm < '6')
			{
				while (sm <= '9')
				{
					/* prints time */
					_putchar(fh);
					_putchar(sh);
					_putchar(':');
					_putchar(fm);
					_putchar(sm);
					_putchar('\n');
		if ((fh == '2' && sh == '3') && (fm == '5' && sm == '9'))
			break;
		sm++;
				}
		if ((fh == '2' && sh == '3') && (fm == '5' && sm == '9'))
			break;
			sm = '0';
			fm++;
			}
		if ((fh == '2' && sh == '3') && (fm == '5' && sm == '9'))
			break;
			fm = '0';
			sh++;
		}
		fh++;
		sh = '0';
	}

}
