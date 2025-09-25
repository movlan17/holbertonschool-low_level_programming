#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - a function that frees a list_t list
 * @head: pointers
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (tmp->next != NULL )
	{
		tmp = head-> next;
		free(head-> str);
		free(head);
		head = tmp;
	}
}
