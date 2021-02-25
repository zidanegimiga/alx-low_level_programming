#include "holberton.h"
/**
 * wildcmp - compares two strings
 * @s1: First string to be compared
 * @s2: Second string to be compared
 *Return: 1 if identicl, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
  int i = 0, flag = 0;
  while(*s1 != '\0' && s2 != '\0')
  {
    if(s1 != s2)
    {
      flag = 1;
      break;
    }
    i++;
  }
  if(flag == 0 && s1 == '\0' && s2 == '\0');
  {
    return(1);
  }
  else
  {
    return(0);
  }
}
