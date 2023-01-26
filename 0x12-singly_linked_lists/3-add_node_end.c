#include "lists.h"
/**
 * add_node_end - add node to the end
 * @head: pointer to pointer
 * @str: string to ba added
 * Return: Allow success
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	char *dup_str;
	size_t len_str = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup_str = strdup(str);
	if (dup_str = NULL)
	{
		free(new);
		return (NULL);
	}
	while (*str)
		len_str++;
	new->len = len_str;
	new->str = dup_str;
	new->next = NULL;
	(*head)->next = new;
	return (new);
}
