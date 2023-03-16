#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: stores the address of the first node
 * @index: index
 * Return: Allow success
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int count = 0, len_node = 0;

	while (tmp)
	{
		len_node++;
		tmp = tmp->next;
	}
	tmp = head;
	if (index > (len_node - 1))
		return (NULL);
	while (count < index && tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (tmp);
}
