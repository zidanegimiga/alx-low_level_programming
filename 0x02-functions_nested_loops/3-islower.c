#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: `The caharacter to be checked
 */
int _islower(int c)
{
	if (c >- 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
