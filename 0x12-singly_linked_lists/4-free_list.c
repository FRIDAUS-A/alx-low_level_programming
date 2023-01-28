#include "lists.h"
/**
 * free_list - a function that frees list
 * @head: pointer to the first node
 * Return: Allow success
*/
void free_list(list_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
