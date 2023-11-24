#include "main.h"
/**
 * clear_bits - sets value of bit to 0
 * @n: pointer
 * @index: bit
 * Return: 1 for correct, otherwise -1 fail
 */
int clear_bit(unsigned long int *n, unsigned
		int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
