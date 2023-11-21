#include "lists"
/**
 * reverse_listint - reverses list
 * @head: pointer
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x = NULL;
	listint_t *y = NULL;

	while (*head)
	{
		y = (*head)->y;
		(*head)->x = y;
		x = *head;
		*head = y;
	}
	*head = x;
	return (*head);
}
