#include "lists.h"
/**
 * add_nodeint - a function that add new node at the beginning
 * @head: address of the head
 * @n: data value
 * Return: Allow success
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
