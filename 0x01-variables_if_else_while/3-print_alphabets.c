#include <stdio.h>

/**
*main - prints the alphabet in lower then uppecas
*Return: 0;
*/

int main(void)
{
char lowercase = 'a';
char uppercase = 'A';

while (lowercase <= 'z') /*to print lowercase characters*/
{
putchar(lowercase);
lowercase++;
}
while (uppercase <= 'Z') /*to print uppercase characters*/
{
putchar(uppercase);
uppercase++;
}
putchar('\n');
return(0);
}

