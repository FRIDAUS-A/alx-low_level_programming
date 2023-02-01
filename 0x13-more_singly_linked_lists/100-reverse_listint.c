#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: adddress of the pointer to the first node
 * Return: Allow success
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp_1, *tmp_2;

	while (*head)
	{
		tmp_1 = *head;
		*head = (*head)->next;
		tmp_2 = *head;
		tmp_2->next = tmp_1;
	}
	return (tmp_1);
}
