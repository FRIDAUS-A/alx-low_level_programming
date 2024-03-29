#include "lists.h"

/**
 * dlistint_len - returns the number of ele in a list
 * @h: pointer to the first node and to null
 * Return: Allow success
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len_node = 0;

	while (h)
	{
		len_node++;
		h = h->next;
	}
	return (len_node);
}
