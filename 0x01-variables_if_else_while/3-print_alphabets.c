#include<stdio.h>
#include<stdlib.h>
/**
 *  Description: main - prints out all the aplhabets in lower case
 *  then in upper case.
 *  Return: 0 if sucessful.
 */
int main(void)
{
char h;
for (h = 'a'; h <= 'z'; ++h)
	putchar(h);
for (h = 'A'; h <= 'Z'; ++h)
	putchar(h);
putchar('\n');
return (0);
}
