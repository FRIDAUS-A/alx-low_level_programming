#include "lists.h"
/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: pointer to the string that container that hold the new node
 * @str: string to add to the node
 * Return: Allow success
*/
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len_str;
	list_t *new;
 	char *dup_str;

	new = (list_t*)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len_str = 0; str[len_str];)
		len_str++;
	new->len = len_str;
	new->str = dup_str;
	new->next = *head;
	*head = new;
	return (new);
}
