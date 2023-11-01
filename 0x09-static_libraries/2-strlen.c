#include "main.h"
/**
  * _strlen - return the length of a string
  * @s: string
  * Return: length
  */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
