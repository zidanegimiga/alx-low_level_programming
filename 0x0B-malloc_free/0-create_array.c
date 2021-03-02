#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 *
 * @size: size of array
 * @c: character to init array
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *char_arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	char_arr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		char_arr[i] = c;
	if (char_arr == NULL)
		return (NULL);
	return (char_arr);
}
© 2021 GitHub, Inc
