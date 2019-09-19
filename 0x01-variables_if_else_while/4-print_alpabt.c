#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter = 'a';

	do {
		if (letter == 'e' || letter == 'q')
		{
			letter++;
			continue;
		}
		putchar(letter);
		letter++;
	} while (letter <= 'z');
	putchar('\n');

	return (0);
}
