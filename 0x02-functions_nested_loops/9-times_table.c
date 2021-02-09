#include "holberton.h"

/**
 * times_table - prints the 9x table
 *
 * Return: returns void
 */
void time_table(void )
{
	int i, z, output;

	for (i = 0; i < 10; i++)
	{
		for (z =0; z < 10; z++)
		{
			output = z * i;

			if (z == 0)
				_putchar('0' + output);
			else if (output >= 10)
			{
				_putchar(' ');
				_putchar('0' + (output / 10));
				_putchar('0' + (output % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (output % 10));
			}
			if (z != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
