#include "lists.h"
/**
 * add_nodeint_end - adds node at the emd of list
 * @head: pointer
 * @n: data input
 * Return: pointer
 */
listint_t *add_nodeint_end(listint_t **head,
		const int n)
{
	listint_t *x;
	listint_t *y = *head;

	x = malloc(sizeof(listint_t));

	if (!x)
		return (NULL);
	x->n = n;
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
		return (x);
	}
	while (y->next)
		y = y->next;
	y->next = x;
	return (x);
}
