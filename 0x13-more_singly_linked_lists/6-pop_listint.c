#include "lists.h"
/**
 * pop_listint - deletes the head node and returns the data
 * @head: address of head
 * Return: Allow success
*/
int pop_listint(listint_t **head)
{
	int tmp;
	
	if (*head == NULL)
		return (0);
	tmp = (*head)->n;
	free(*head);
	return (tmp);
}
