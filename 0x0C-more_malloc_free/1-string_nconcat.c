#include "main.h"
#include <stdlib.h>
/**
  * *string_nconcat - concatenates two string to pointer
  * @s1: string
  * @s2: string
  * @n: number of bytes
  * Return: string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r;
	unsigned int y = 0, z = 0, a = 0, b = 0;

	while (s1 && s1[a])
		a++;
	while (s2 && s2[b])
		b++;

	if (n < b)
		r = malloc(sizeof(char) * (a + n + 1));
	else
		r = malloc(sizeof(char) * (a + b + 1));

	if (!r)
		return (NULL);

	while (y < a)
	{
		r[y] = s1[y];
		y++;
	}

	while (n < b && y < (a + n))
		r[y++] = s2[z++];

	while (n >= b && y < (a + b))
		r[y++] = s2[z++];

	r[y] = '\0';
	return (r);
}
