#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count;

	for (count = 48; count <= 57; count++)
	{
		putchar(count);
		if (count <= 56)
		{
			putchar(44);
		}
		if (count <= 56)
		{
			putchar(32);
		}
	}
		putchar('\n');

	return (0);

}
