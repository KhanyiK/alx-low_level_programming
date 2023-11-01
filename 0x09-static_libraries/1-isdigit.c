#include "main.h"
/**
  * _isdigit - check for digits 0-9
  * @c: to check
  * Return: return 1 if its a digit. otherwise return 0
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
