#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/**
  * main - prints opcodes its own opcodes
  * @argc: arguments
  * @argv: array
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int b, x;
	int (*address)(int, char **) =  main;
	unsigned char opcode;

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

	for (x = 0; x < b; x++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (x == b - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
