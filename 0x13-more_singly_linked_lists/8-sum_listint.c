#include "lists.h"
/**
 * sum_listint - calculates the sum of data
 * @head: first node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int x = 0;
	listint_t *y = head;

	while (y)
	{
		x += y->n;
		y = y->next;
	}
	return (x);
}
