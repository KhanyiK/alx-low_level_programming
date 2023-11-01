#include "main.h"
#include <stdlib.h>
/**
  * create_array - creates an array of char and assigns a specific char
  * @size: array size
  * @c: assigned char
  * Return: pointer for char, otherwise NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int x;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		s[x] = c;
	return (s);
}
