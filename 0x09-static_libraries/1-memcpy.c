#include "main.h"
/**
  * _memcpy - copies memory area
  * @dest: stored memory
  * @src: where its copied
  * @n: number of bytes
  * Return: n bytes
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
