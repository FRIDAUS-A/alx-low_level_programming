#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linked listint_t
 * @head: pointer to the first node
 * Return: Allow success
*/
size_t listint_len(const listint_t *h)
{
	size_t len_node = 0;

	while (h)
	{
		len_node++;
		h = h->next
	}
	return (len_node);
}
