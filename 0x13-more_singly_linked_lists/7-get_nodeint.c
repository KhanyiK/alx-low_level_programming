#include "lists.h"
/**
 * get_nodeint - returns the nth node
 * @head: first node
 * @index: node index
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head,
		unsigned int index)
{
	unsigned int x = 0;
	listint_t *y = head;

	while (y && x < index)
	{
		y = y->next;
		x++;
	}
	return (y ? y : NULL);
}
