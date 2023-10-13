#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/**
  * main - prints opcodes
  * @argc: arguments
  * @argv: array
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int b, x;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ar = (char *)main;

	for (x = 0; x < b; x++)
	{
		if (x == b - 1)
		{
			printf("%02hhx\n", ar[x]);
			break;
		}
		printf("%02hhx", ar[x]);
	}
	return (0);
}
