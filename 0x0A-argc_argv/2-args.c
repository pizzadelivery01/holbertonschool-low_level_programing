#include <stdio.h>

/**
 * main - entry point
 * @argc: number of args
 * @argv: array of args
 * Description: prints all args passed into funtion
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
