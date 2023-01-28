#include "lists.h"
/**
 * add_node_end - add node to the end
 * @head: pointer to pointer
 * @str: string to ba added
 * Return: Allow success
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	char *dup_str;
	int len_str = 0;

	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup_str = strdup(str);
	if (dup_str = NULL)
	{
		free(new);
		return (NULL);
	}
	for (len_str = 0; str[len_str];)
		len_str++;
	new->len = len_str;
	new->str = dup_str;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
