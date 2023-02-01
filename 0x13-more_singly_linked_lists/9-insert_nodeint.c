#include "lists.h"
/**
 * insert_nodeint_at_index - a function that
 * inserts a new node at a given position.
 * @head: address of the ointer to the first node
 * @idx: index of the node
 * @n: node data value
 * Return: Allow success
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0, len_node = 0;
	listint_t *new, *tmp_2;

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
	while (count < idx - 1 && (*head))
	{
		count++;
		*head = (*head)->next;
	}
	tmp_2 = *head;
	*head = (*head)->next;
	tmp_2->next = new;
	new->n = n;
	new->next = *head;
	return (new);
}
