#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that
 * inserts a new node at a given position.
 * @h: stores the address of the pointer to the new node
 * @idx: index for the new node to be addesd
 * @n: number to be added
 * Return: Allow success
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new, *pre;
	unsigned int count = 0, len_node = 0;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		*h = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	while (*h)
	{
		len_node++;
		*h = (*h)->next;
	}
	*h = tmp;
	if (idx > len_node)
		return (NULL);
	if (idx == 0)
	{
		new->next = (*h);
		*h = new;
		new->prev = NULL;
		return (new);
	}
	while (*h && (count < idx))
	{
		count++;
		pre = *h;
		*h = (*h)->next;
	}
	(*h)->prev = new;
	new->next = *h;
	new->prev = pre;
	pre->next = new;
	*h = tmp;
	return (new);
}
