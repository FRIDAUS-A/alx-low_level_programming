#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at
 * index index of a dlistint_t linked list.
 * @head: stores the address of the pointer to the first node
 * @index: index
 * Return: Allow success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0, len_node = 0;
	dlistint_t *tmp = *head, *pre;

	if (*head == NULL)
		return (-1);
	while (tmp)
	{
		len_node++;
		tmp = tmp->next;
	}
	if (index > (len_node - 1))
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	while (count < index && tmp)
	{
		count++;
		pre = tmp;
		tmp = tmp->next;
	}
	pre->next = tmp->next;
	if (index != len_node - 1)
		(tmp->next)->prev = pre;
	free(tmp);
		return (1);
}
