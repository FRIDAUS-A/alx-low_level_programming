#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a new node at a given position.
 * @head: address of the ointer to the first node
 * Return: Allow success
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new, *tmp;
	
	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	while ((*head) && count < idx)
	{
		count++;
		*head = (*head)->next;
	}
	tmp = *head;
	new->n = n;
	new->next = tmp;
	return (new);
}
