#include "holberton.h"

/*
 * print_alphabet - prints out the lower case letters
 *
 * Return: returns null
 */
void alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
