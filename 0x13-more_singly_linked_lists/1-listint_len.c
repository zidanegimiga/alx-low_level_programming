#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * listint_len - prints the number of elements in a list
 * 
 * @h: a pointer to the first elemnt of the list
 *
 * Return: Number of elements in a singly linked list
 */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
