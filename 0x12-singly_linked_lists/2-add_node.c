#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - returns length of string
 * @s: character
 * Return: x
 */
int _strlen(const char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * add_node - adds a new node at the beginning of the list
 * @head: double pointer
 * @str: string to be added
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *y;

	y = malloc(sizeof(list_t));

	if (y == NULL)
		return (NULL);
	y->str = strdup(str);
	y->len = _strlen(str);
	y->next = *head;
	*head = y;
	return (y);
}
