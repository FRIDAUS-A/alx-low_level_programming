#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node at index
 * @head: Return: Allow success
 * @index - index to be deleted
 * Return: Allow success
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;

	while (*head && count < index)
	{
		*head = (*head)->next;
	}
	if (*head == NULL)
		return (-1);
	free((*head)->n);
	free(*head);
	return (1);
}
