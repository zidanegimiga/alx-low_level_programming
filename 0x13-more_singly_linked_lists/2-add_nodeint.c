#include "lists.h"

/**
 * add_nodeint - a function that adds a new node to the beginning of a list
 * 
 * @head: points to a pointer of the first node of the list
 *
 * @n: elements to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
  listint_t *new_node;  
  new_node = malloc(sizeof(listint_t));
  
  if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (!*head)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}
