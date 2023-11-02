#include "main.h"
#include <stdlib.h>
/**
  * *malloc_checked - allocates memory with malloc
  * @b: - number of bytes
  * Return: pointer
  */
void *malloc_checked(unsigned int b)
{
	void *y;

	y = malloc(b);

	if (y == NULL)
		exit(98);
	return (y);
}

