#include "lists.h"
/**
 * sum_listint -  a function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: address of the first node
 * Return: Allow success
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
