#include "holberton.h"
/**
 * wildcmp - compares two strings
 * @s1: First string to be compared
 * @s2: Second string to be compared
 *Return: 1 if identicl, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
  unsigned char c1 = *s1, c2 = *s2;
  if (*s1 < *s2)
    return(0);
  if (*s1 > *s2)
    return(0);
  if (*s1 == '\0')
    return(1);
  return wildcmp(s1 + 1, s2 + 1);
}
