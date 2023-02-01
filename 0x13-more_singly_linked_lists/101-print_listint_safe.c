#include "lists.h"
/**
 * print_listint_safe - Write a function that prints a listint_t linked list.
 * @head: address of the first node
 * Return: Allow success
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t ien_node = 0;

	if (head == NULL)
		exit(98);
	while (head)
	{
		printf("[%p] %d\n", head->next, head->new);
		len_node++;
		head = head->next;
	}
	return (len_node);
}
