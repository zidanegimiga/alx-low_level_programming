## Dynamic Libraries
This directory caontains a dynamic library as well as a bash script that creates a dynamic library using all the .c files in the directory it is in at the time of running it.

# libholberton.so
A dynamic library that contains the functions listed below:

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
holberton.h
A header file containing the function prototypes for all the functions above.

# 1-create_dynamic_lib.sh
A bash script that creates a dynamic library called liball.so from all the .c files that are in the directory it is in at the time of running it.
