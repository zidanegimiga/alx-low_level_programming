#include "holberton.h"

/**
 * print_number - function to concatenate two strings and return a new string
 *
 * Return: null
 */
void print_number(int n)
{
	if (n < 0) { 
        	putchar('-'); 
        	n = -n; 
    	} 
    	if (n/10) 
        print(n/10); 
  
        putchar(n%10 + '0'); 
} 
