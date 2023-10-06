#include "main.h"
#include <stdlib.h>
/**
  * *array_range - creates an array of integers
  * @min: range of values
  * @max: range of values
  * Return: new array
  */
int *array_range(int min, int max)
{
	int *x;
	int y, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	x = malloc(sizeof(int) * s);

	if (x == NULL)
		return (NULL);

	for (y = 0; min <= max; y++)
		x[y] = min++;

	return (x);
}
