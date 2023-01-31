#include "lists.h"
/**
 * listint_len - returns the number of element in a list
 * @h: address of the first node
 * Return: Allow success
*/
size_t listint_len(const listint_t *h)
{
	size_t len_node = 0;

	while (h)
	{
		len_node++;
		h = h->next;
	}
	return (len_node);
}
