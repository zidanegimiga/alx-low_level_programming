#include "lists.h"

/**
 * listint_len - prints the number of elements in a list
 * 
 * @h: a pointer to the first elemnt of the list
 *
 * Return: Number of elements in a singly linked list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	listint_t *current_node = h;

 	while (h != '\0')
	{
		h = h -> next;
		count++;
	}
	return (count);
}
