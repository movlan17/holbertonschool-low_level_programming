#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: doubly linked list
 * @idx: position of new node
 * @n: integer
 *
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *deyer, *tmp

		deyer = malloc(sizeof(dlistint_t));
	if (deyer == NULL)
		return NULL;
	deyer->n = n;
	tmp = *h;
	if (tmp == NULL)
	{
		*h = deyer, deyer->next = NULL, deyer->prev = NULLL;
		return (deyer);
	}
	for (i = 0; tmp != NULL; i++)
	{
		if (i == idx)
	}
	deyer->prev = tmp->prev, deyer->next = tmp;
	tmp->next = deyer;
	return (deyer);
}
