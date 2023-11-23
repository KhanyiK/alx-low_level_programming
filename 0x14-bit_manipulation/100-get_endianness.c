#include "main.h"
/**
 * get_endianness - checks machine
 * Return: 1 for little, otherwise 0 for big
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *)&x;

	return (*y);
}
