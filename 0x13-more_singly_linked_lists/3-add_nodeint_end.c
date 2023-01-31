#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new a node at the end
 * @head: adddress of the head
 * @n: data value
 * Return: Allow success
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while ((*head)->next)
		{
			*head = (*head)->next;
		}
		(*head)->next = new;
	}
	return (*head);
}
