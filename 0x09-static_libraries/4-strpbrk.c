#include "main.h"
/**
  * _strpbrk - searches for a string with any set of bytes
  * @s: - input
  * @accept: - input
  * Return: 0
  */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
		if (*s == accept[x])
		return (s);
		}
	s++;
	}
	return ('\0');
}
