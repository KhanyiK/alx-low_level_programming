#include <stdio.h>
#include "function_pointers.h"
/**
  * array_iterator - prints funct given as a parameter on each elem of an arr
  * @array: array
  * @size: element
  * @action: pointer
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y;

	if (array == NULL || action == NULL)
		return;
	for (y = 0; y < size; y++)
	{
		action(array[y]);
	}
}

