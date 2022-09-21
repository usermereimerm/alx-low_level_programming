#ifndef MAIN_H
#define MAIN_H

/**
 * main - returns a function
 * char prototype(char*, char* src)
 * int prototype(char*, char*)
 * void prototype(int, int)
 */

#include<stdio.h>

int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *string_toupper(char *str);
char *cap_string(char *);
char *leet(char *);

#endif /* MAIN_H */
