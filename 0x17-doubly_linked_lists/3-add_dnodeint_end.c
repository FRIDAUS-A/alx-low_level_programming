#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end
 * @head: stores to the address of the pointer to the first node
 * @n: number to be added
 * Return: Allow success
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp = *head;
	
	if (*head == NULL)
		return (NULL);
	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while ((*head)->next)
	{
		*head = (*head)->next;
	}
	(*head)->next = new;
	new->prev = *head;
	*head = tmp;
	return (new);
}
