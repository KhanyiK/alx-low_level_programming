#include "main.h"
/**
 * get_bit - returns value of bit
 * @n: input number
 * @index: bit
 * Return: value of bit
 */
int get_bit(unsigned long int n,
		unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);
	x = (n >> index) & 1;
	return (x);
}
