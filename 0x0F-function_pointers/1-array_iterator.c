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
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
