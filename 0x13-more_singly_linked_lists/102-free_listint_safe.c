#include "lists.h"
/**
 * free_listint_safe - frees list
 * @h: pointer
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t x = 0;
	int z;
	listint_t *y;

	if (!h || *h)
	{
		z = *h - (*h)->next;

		if (z > 0)
		{
			y = (*h)->next;
			free(*h);
			*h = y;
			x++;
		}
		else
		{
		free(*h);
		*h = NULL;
		x++;
		break;
		}
	}
	*h = NULL;
	return (x);
}
