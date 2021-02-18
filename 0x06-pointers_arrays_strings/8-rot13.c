#include "holberton.h"

/**
 * rot13 - converts string to leet
 *
 * @c: character string pointer
 * Return: char pointer
 */
char *rot13(char *c)
{
	int i, j;
	char rot_13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm",
	alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (alphabet[j] == c[i])
			{
				c[i] = rot_13[j];
				break;
			}
		}
	}
	return (c);
}
© 2021 GitHub, Inc.
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
