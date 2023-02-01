#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node.
 * @head: address of the first node
 * @index: index of the node
 * Return: Allow success
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head && count < i)
	{
		count++;
		head = head->next;
	}
	if (head == NULL)
		return (0);
	return (head);
}
