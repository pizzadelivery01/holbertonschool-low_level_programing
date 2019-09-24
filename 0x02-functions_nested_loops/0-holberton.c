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

if (i <= 9)
{
	_putchar(string[i]);
	i++;
}
_putchar("\n");
return (0);
}
