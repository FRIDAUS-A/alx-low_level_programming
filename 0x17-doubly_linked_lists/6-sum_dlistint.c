#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data
 * @head: stores the address of the first node
 * Return: Allow success
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
