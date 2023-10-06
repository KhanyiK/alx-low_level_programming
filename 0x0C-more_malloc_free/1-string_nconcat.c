#include "main.h"
#include <stdlib.h>
/**
  * *string_nconcat - concatenates two string
  * @s1: string
  * @s2: string
  * @n: number of bytes
  * Return: string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int y = 0, z = 0, a = 0, b = 0;

	while (s1 && s1[a])
		a++;
	while (s2 && s2[b])
		b++;

	if (n < b)
		x = malloc(sizeof(char) * (a + n + 1));
	else
		x = malloc(sizeof(char) * (a + b + 1));

	if (!x)
		return (NULL);

	while (y < a)
	{
		x[y] = s1[y];
		y++;
	}

	while (n < b && y < (a + b))
		x[y++] = s2[z++];

	x[y] = '\0';
	return (x);
}
