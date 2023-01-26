#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the first node
 * Return: Allow success
*/
size_t list_len(const list_t *h)
{
	size_t len_node = 0;
	
	while (h->str)
		len_node++;
	return (len_node);
}
