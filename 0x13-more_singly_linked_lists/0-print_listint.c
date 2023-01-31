#include "lists.h"
/**
 * print_listint - a function that lists all the elements of a listint_t list
 * @h: pointer to the first node
 * Return: Allow success
*/
size_t print_listint(const listint_t *h)
{
	size_t len_node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len_node++;
		h = h->next;
	}
	return (len_node);
}
