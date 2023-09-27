#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - prints sum of two diagonals
  * @a: input
  * @size: input
  * Return: 0
  */
void print_diagsums(int *a, int size)
{
	int x, y, b;

	x = 0;
	y = 0;

	for (b = 0; b < size; b++)
	{
		x = x + a[b * size + b];
	}
	for (b = size - 1; b >= 0; b--)
	{
		y += a[b * size + (size - b - 1)];
	}
	printf("%d, %d\n", x, y);
}
