#include "lists.h"
/**
 * free_listint - frees a listint
 * @head: pointer to the first node
 * Return: Allow success
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
