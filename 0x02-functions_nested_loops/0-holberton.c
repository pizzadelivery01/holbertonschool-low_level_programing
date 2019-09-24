#include<stdio.h>
#include<holberton.h>
/**
 * main - Entry point
 * func - prints Holberton
 * Return: Always 0 (Success)
 */

int main(void)
{

int i;
char string[9] = "Holberton";

for (i = 0, i <= 8, i++)
{
	_putchar(string[i]);
}
_putchar("\n");
return (0);
}
