#include "holberton.h"

/*
 * print_alphabet - prints out the lower case letters
 *
 * Return: returns null
 */
void alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putcchar('\n');
}
