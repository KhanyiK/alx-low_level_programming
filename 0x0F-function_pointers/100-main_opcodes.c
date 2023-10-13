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
	char *arr;

	if (argc != 2)
	{
		printf("error\n");
		exit(1);
	}
	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("error\n");
		exit(2);
	}
	arr = (char *)main;

	for (x = 0; x < b; x++)
	{
		if (x == b - 1)
		{
			printf("%02hhx\n", arr[x]);
			break;
		}
		printf("%02hhx", arr[x]);
	}
	return (0);
}
