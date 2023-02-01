#include "lists.h"
/**
 * pop_listint - deletes the head node and returns the data
 * @head: address of head
 * Return: Allow success
*/
int pop_listint(listint_t **head)
{
	int tmp;
	listint_t *first_node;

	if (*head == NULL)
		return (0);
	tmp = (*head)->n;
	first_node = (*head)->next;
	free(*head);
	*head = first_node;
	return (tmp);
}
