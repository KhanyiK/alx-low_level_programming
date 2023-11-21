#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - finds length of string
 * @str: string
 * Return: string length
 */
unsigned int _strlen(char *str)
{
	unsigned int x;

	for (x = 0; str[x]; x++)
		;
	return (x);
}

/**
 * add_node_end - adds new node
 * @head: double pointer
 * @str: string
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const
		char *str)
{
	list_t *x, *y;

	if (str == NULL)
		return (NULL);
	x = malloc(sizeof(list_t));

	if (x == NULL)
		return (NULL);
	x->str = strdup(str);

	if (x->str == NULL)
	{
		free(x);
		return (NULL);
	}
	x->len = _strlen(x->str);
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
		return (x);
	}

	y = *head;

	while (y->next)
		y = y->next;
	y->next = x;
	return (x);
}
