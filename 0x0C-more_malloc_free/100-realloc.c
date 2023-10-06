#include "main.h"
#include <stdlib.h>
/**
  * *_realloc - reallocates a memory block
  * @ptr: pointer
  * @old_size: size of allocated memory
  * @new_size: size of new memory block
  * Return: newly allocated memory block
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;
	char *y;
	unsigned int a;

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
		for (a = 0; a < new_size; a++)
			x[a] = y[a];
	}

	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			x[a] = y[a];
	}

	free(ptr);
	return (x);
}
