#include <stdio.h>
#include "holberton.h"

/**
 * main - entry point
 * @argc: amount of args
 * @argv: array of args
 * Description: prints name of program
 * Return: function name
 */
int main(int argc, char *argv)
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
