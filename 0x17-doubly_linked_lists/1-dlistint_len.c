#include "lists.h"

/**
 * dlistint_len - returns the number of ele in a list
 * @h: pointer to the first node and to null
 * Return: Allow success
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len_node = 0;
	dlistint_t *tmp = h;

	while (tmp)
	{
		len_node++;
		tmp = tmp->next;
	}
}
