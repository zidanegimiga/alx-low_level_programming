#include "holberton.h"

/**
 * _puts_recursion - prints a sptring followed by a new line
 * @s: string to passed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while(s[i])
	{
		if (_putchar (s[i]) == EOF)
		{
			return EOF;
		}
		i++;
	}
	if (_putchar('\n') == EOF)
	{
		return EOF;
	}
	return (1);
}
