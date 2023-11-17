#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of the list
 * @head: double pointer
 * @str: string to be added
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *x;
	unsigned int len = 0;

	while (str[len])
		len++;
	x = malloc(sizeof(list_t));

	if (!x)
		return (NULL);
	x->str = strdup(str);
	x->len = len;
	x->next = (*head);
	(*head) = x;
	return (*head);
}
