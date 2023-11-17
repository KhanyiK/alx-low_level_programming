#include "lists.h"
#include <string.h>
/**
 * free_list - frees a list_t list
 * @head: linked list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *x;

	while ((x = head) != NULL)
	{
		head = head->next;
		free(x->str);
		free(x);
	}

