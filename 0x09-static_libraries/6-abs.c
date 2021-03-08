#include "holberton.h"

/**
 * _abs - calculates absolute vale of an integer
 * @n: integer to be passed
 *
 * Return: funnction returns 0
 */
int  _abs(int n)
{
	if (n > 0)
	{
		n = n * 1;
	}
	else if (n == 0)
	{
		n = 0;
	}
	else if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
