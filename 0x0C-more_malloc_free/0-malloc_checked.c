#include "main.h"
#include <stdlib.h>
/**
  * *malloc_checked - allocates memory
  * @b: - number of bytes
  * Return: pointer
  */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
		exit(98);

	return (x);
}
