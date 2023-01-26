#include "lists.h"
/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: pointer to the string that container that hold the new node
 * @str: string to add to the node
 * Return: Allow success
*/
list_t *add_node(list_t **head, const char *str)
{
	int len_str = 0;
	list_t *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str)
		len_str++;
	new->len = len_str;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
