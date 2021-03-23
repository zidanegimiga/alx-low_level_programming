#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct - listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * print_listint - prints all the elements in a list
 * @h: A node of type listint_t
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h);

#endif /* HOLBERTON_H */
