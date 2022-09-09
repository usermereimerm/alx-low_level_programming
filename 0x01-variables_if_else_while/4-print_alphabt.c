#include<stdio.h>
#include<stdlib.h>
/**
 *  Description: main - prints out all alphabets except q and e
 *  Return: 0 if successful.
 */
int main(void)
{
char f;
for (f = 'a'; f <= 'z' && f != 'q', 'e'; ++f)
	putchar(f);
putchar('\n');
return (0);
}
