#include "main.h"
/**
  *print_alphabet_x10 - prints the alphabet 10 times
  *
  *Return: 0
  */
void print_alphabet_x10(void);
{
	int x;
	int y;

	for (y = 1; x <= 10; x++)
	{
		for (y = 97; x <= 122; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
