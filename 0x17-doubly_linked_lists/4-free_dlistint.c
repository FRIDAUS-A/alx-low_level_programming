#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: stores the address of the first node and the prev to NULL
 * Return: Allow success
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	if (head != NULL)
	{
		while (head)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
	}
}
