#include "holberton.h"
/**
 *_strlen_recursion - length of a string.
 *@s: points to a string.
 *
 *Return: length of string.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
  *checker - check if palindrome.
  *@s: pointer to string.
  *@fi: first index.
  *@la: last index.
  *
  *Return: 0 if not palindrome, 1 if palindrome.
  */
int checker(char *s, int fi, int la)
{
	if (fi < la && s[fi] == s[la])
	{
		helperFunction(s, fi + 1, la - 1);
	}
	if (s[fi] != s[la])
	{
		return (0);
	}
	return (1);
}

/**
  *is_palindrome - checks if string is palindrome or not.
  *@s: pointer to string.
  *
  *Return: 1 if string is palindrome 0 if not.
  */
int is_palindrome(char *s)
{
	int fi, la;

	fi = 0;
	li = _strlen_recursion(s) - 1;

	if (!*s)
		return (1);

	return (helperFunction(s, fi, la));
}
