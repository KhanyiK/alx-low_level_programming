#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/**
  * main - prints opcodes of main function
  * @argc: arguments
  * @argv: array
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int a, b;
	int (*address)(int, char **) =  main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (b = 0; b < a; b++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (b == a - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
