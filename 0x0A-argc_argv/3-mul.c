#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies numbers followed by new line
 * @argc: argument
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, x;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	x = atoi(argv[2]);
	printf("%d\n", i * x);
	return (0);
}
