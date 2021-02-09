#include "holberton.h"

/**
 * main - entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	char text[9] = "Holberton";
	int i;

	for (i = 0; i < 9; i++;)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
