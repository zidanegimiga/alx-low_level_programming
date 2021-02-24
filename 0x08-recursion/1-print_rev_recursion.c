#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: The variale to pass
 *
 * Return: NULL
 */
void _print_rev_recursion(char *s)
{
	if (*s)
		reverse(s + 1);
	_putchar(*s);
}
