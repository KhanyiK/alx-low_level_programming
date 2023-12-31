#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints the elements of a list_t list
 * @h: pointer
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	int x = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		x++;
		h = h->next;
	}
	return (x);
}
