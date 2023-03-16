#include "lists.h"

/**
 * print_dlistint - a function that prints all
 * the elements of a dlistint_t list.
 * @h: pointer to the first node and to null
 * Return: Allow success
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_no = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_no++;
		h = h->next;
	}
	return (node_no);
}
