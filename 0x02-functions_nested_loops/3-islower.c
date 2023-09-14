#include "main.h"
/**
  *_islower - prints 1 if c is lowercase.  another cases print 0
  *@c: the character is in ASCII code
  *Return: 1 for lowercase. 0 for the rest
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
