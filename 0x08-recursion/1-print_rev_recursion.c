#include "holerton.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: variable passed to the fuunction
 * Return: null
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
