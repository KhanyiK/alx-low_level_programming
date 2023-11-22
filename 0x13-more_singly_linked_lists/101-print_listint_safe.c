#include <stdio.h>
#include "lists.h"
/**
 * looped_listint_len - counts number of node
 * @head: pointer
 * Return: 0, otherwise number of nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *x, *y;
	size_t z = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	x = head->next;
	y = (head->next)->next;

	while (y)
	{
		if (x == y)
		{
			x = head;
			while (x != y)
			{
				z++;
				x = x->next;
				y = y->next;
			}
			x = x->next;
			while (x != y)
			{
				z++;
				x = x->next;
			}
			return (z);
		}
		x = x->next;
		y = y->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints listint_t list
 * @head: pointer
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t x, y = 0;

	x = looped_listint_len(head);

	if (x == 0)
	{
		for (; head != NULL; x++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (y = 0; y < x; y++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p]%d\n", (void *)head, head->n);
	}
	return (x);
}
