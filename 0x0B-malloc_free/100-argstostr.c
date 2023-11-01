#include "main.h"
#include <stdlib.h>
/**
  * argstostr - concatenates all the arguments of your program
  * @ac: integer
  * @av: array
  * Return: 0
  */
char *argstostr(int ac, char **av)
{
	int x, y, z = 0, a = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			a++;
	}
	a += ac;

	s = malloc(sizeof(char) * a + 1);
	if (s == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y]; y++)
	{
		s[z] = av[x][y];
		z++;
	}
	if (s[z] == '\0')
	{
		s[z++] = '\n';
	}
	}
	return (s);
}

