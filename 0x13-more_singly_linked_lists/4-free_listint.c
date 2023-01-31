#include "lists.h"
/**
 * free_listint - frees a listint
 * @head: pointer to the first node
 * Return: Allow success
*/
void free_listint (listint_t *head)
{
	while (head)
	{
		free(head->n);
		free(head);
		head = head->next;
	}
}
