#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting point
 *
 * Return: returns void
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		printf("%d", n);
		n++;
		while (n <= 98)
		{
			printf(", %d", n);
			n++;
		}
		printf("\n");
	}
	else
	{
		printf("%d", n);
		n--;
		while (n >= 98)
		{
			printf(", %d", n);
			n--;
		}
		printf("\n");
	}
}	
