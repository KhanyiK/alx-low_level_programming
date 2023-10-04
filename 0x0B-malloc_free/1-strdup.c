#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * @str: char
  * Return: 0
  */
char *_strdup(char *str)
{
	char *x;
	int y, z = 0;

	if (str == NULL)
		return (NULL);
	y = 0;
	while (str[y] != '\0')
		y++;

	x = malloc(sizeof(char) * (y + 1));

	if (x == NULL)
		return (NULL);

	for (z = 0; str[z]; z++)
		x[z] = str[z];

	return (x);
}
