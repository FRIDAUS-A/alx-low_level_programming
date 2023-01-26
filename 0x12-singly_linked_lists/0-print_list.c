#include "lists.h"
/**
 * print_list - a function that prints all the elements of list_t
 * @h: head of the node
 * Return: Allow success
*/
size_t print_list(const list_t *h)
{
	size_t len_node = 0;

	while (h->next)
	{
		if (h->str)
			printf("[%d] %s", h->len, h->str);
		else
			printf("[0] (nil)");
		len_node++;
		h = h->next;
	}
	return (len_node);
}
