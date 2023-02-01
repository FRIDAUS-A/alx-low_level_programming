#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node at index
 * @head: address of the pointer to the first node
 * @index: index to be deleted
 * Return: Allow success
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp_1, *tmp_2;

	if (*head == NULL)
		return (-1);
	while (*head && count < index - 1)
	{
		count++;
		*head = (*head)->next;
	}
	tmp_2 = *head;
	*head = (*head)->next;
	tmp_1 = (*head)->next;
	free(*head);
	tmp_2->next = tmp_1;
	free(*head);
	return (1);
}
