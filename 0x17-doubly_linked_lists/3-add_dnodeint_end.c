#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end
 * @head: stores to the address of the pointer to the first node
 * @n: number to be added
 * Return: Allow success
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp = *head, *pre;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
	}
	new->n = n;
	new->next = NULL;
	while (*head)
	{
		pre = *head;
		*head = (*head)->next;
	}
	pre->next = new;
	new->prev = pre;
	*head = tmp;
	return (new);
}
