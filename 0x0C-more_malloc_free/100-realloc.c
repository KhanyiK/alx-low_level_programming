#include "main.h"
#include <stdlib.h>
/**
  * *_realloc - reallocates a memory block with malloc
  * @ptr: pointer
  * @old_size: size of allocated memory
  * @new_size: size of new memory block
  * Return: newly allocated memory block
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;
	char *y;
	unsigned int z;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	x = malloc(new_size);
	if (!x)
		return (NULL);

	y = ptr;

	if (new_size < old_size)
	{
		for (z = 0; z < new_size; z++)
			x[z] = y[z];
	}

	if (new_size > old_size)
	{
		for (z = 0; z < old_size; z++)
			x[z] = y[z];
	}

	free(ptr);
	return (x);
}
