#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index.
 * @h: Double pointer to the head of the list.
 * @idx: Index where the new node should be added (starting at 0).
 * @n: Integer value to store in the new node.
 *
 * Return: Address of the new node, or NULL if it failed or index is invalid.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	if (!h)
		return (NULL);

	/* Insert at the beginning */
	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	for (i = 0; temp != NULL && i < idx - 1; i++)
		temp = temp->next;

	/* If temp is NULL, index is out of range */
	if (temp == NULL)
		return (NULL);

	/* If inserting at the end */
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Create new node */
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}

