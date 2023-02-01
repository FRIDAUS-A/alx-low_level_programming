#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a new node at a given position.
 * @head: address of the ointer to the first node
 * Return: Allow success
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0, len_node;
	listint_t *new, *tmp_1, *tmp_2;
	
	tmp_1 = *head;
	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	while ((*head))
	{
		len_node++;
		*head = (*head)->next;
	}
	*head = tmp_1;
	if (idx > (len_node - 1))
		return (NULL);
	while (count < idx)
	{
		count++;
		*head = (*head)->next;
	}
	tmp_2 = *head;
	*head = tmp_1;
	new->n = n;
	new->next = tmp_2;
	return (new);
}
