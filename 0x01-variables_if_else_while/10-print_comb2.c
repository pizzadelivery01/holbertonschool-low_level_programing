#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first;
	int second;

	for (first = 48; first <= 57; first++)
	{
		for (second = 48; second <= 57; second++)
		{
			putchar (first);
			putchar (second);
			if (first && second == 57)
			{
				break;
			}
			else
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);

}
