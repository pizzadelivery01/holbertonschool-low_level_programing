#include <stdio.h>

/**
 * main - prints the number of args to program
 * @argc: number of args
 * @argv: array of args
 * Description: prints number of args passed into program
 * Return: 0
 */

int main(int argc, *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
