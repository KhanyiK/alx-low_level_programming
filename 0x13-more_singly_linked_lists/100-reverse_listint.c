#include "lists"
/**
 * reverse_listint - reverses list
 * @head: pointer
 * Return: pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = x;
		x = *head;
		*head = next;
	}
	*head = x;
	return (*head);
}
