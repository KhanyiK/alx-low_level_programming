#include "main.h"
/**
  * print_alphabet - print the alphabet in lowercase
  * Return: 0
  */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
