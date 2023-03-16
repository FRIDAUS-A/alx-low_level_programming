#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node at a given position.
 * @head: stores the address of the pointer to the new node
 * @idx: index for the new node to be addesd
 * @n: number to be added
 * Return: Allow success
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new, *pre;
	unsigned int count = 0;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (tmp && (count < idx))
	{
		count++;
		pre = tmp;
		tmp = tmp->next;
	}
	tmp->prev = new;
	new->next = tmp;
	new->prev = pre;
	pre->next = new;
	new->n = n;
}
