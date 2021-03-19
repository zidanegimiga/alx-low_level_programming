#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: pointer to head of the list
 * @str: string to be added in new node
 * Return: pointer to added node or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t)), *last_node = NULL;
	unsigned int len = 0;

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	while (str[len])
		len++;
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
	last_node = *head;
	if (!*head)
	{
		*head = new_node;
		return (*head);
	}
	else
	{
		last_node = *head;
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (last_node->next);
}
