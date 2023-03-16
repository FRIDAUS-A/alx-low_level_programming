#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at
 * index index of a dlistint_t linked list.
 * @head: stores the address of the pointer to the first node
 * @index: index
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp = *head, *pre;

	while (count < index && tmp)
	{
		count++;
		pre = tmp;
		tmp = tmp->next;
	}
	pre->next = tmp->next;
	free(tmp)
}
