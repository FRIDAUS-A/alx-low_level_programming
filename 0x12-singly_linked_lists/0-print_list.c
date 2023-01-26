#include "lists.h"
/**
 * print_list - a function that prints all the elements of list_t
 * @h: head of the node
 * Return: Allow success
*/
size_t print_list(const list_t *h)
{
	size_t len_node = 0;

	while (h)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		len_node++;
		h = h->next;
	}
	return (len_node);
}
