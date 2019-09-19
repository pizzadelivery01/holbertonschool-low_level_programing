#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		for (y = ','; y == ','; y++)
		putchar(y);
		for (z = ' '; z == ' '; z++)
		putchar(z);
	}
		putchar('\n');

	return (0);

}
