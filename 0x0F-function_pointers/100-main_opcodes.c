#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * print_opcodes - prints opcodes
 * @a: addres
 * @n: num of bytes
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		printf("%.2hhx", a[y]);
		if (y < n - 1)
			printf(" ");
	}
	printf("\n");
}
/**
  * main - prints opcodes of main function
  * @argc: arguments
  * @argv: array
  * Return: 0
  */
int main(int argc, char *
		*argv)
{
	int x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, x);
	return (0);
}
