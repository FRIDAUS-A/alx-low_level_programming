#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning
 * @head: stores the address of the pointer to the first node
 * @n: number to be added
 * Return: Allow success
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
