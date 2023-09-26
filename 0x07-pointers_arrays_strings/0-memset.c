#include "main.h"
/**
  * _memset - fills memory with a constant bye
  * @s: starting address
  * @b: value
  * @n: number of bytes
  * Return: value for n bytes
  */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
