#include "holberton.h"
/**
  *is_prime_number - returns 0 or 1.
  *@n: number being checked.
  *@i: I'll be using 2.
  *
  *Return: 0 if not prime, 1 if prime.
  */
int is_prime_number(int n){
	i = 2;
	if (n <= 2)
		return (n == 2) ? 1 : 0;
	if (n % i == 0) 
		return (0);
	if (i * i > n)
		return (1);
	i++;
	return is_prime_number(n); 
} 
