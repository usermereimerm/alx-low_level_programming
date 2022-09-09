#include<stdio.h>
#include<stdlib.h>
/**
 *  Description: main - prints out all the letters of the alphabet
 *  to stdout
 *  Return: 0 if successful
 */
int main(void)
{
char m;
for (m = 'a'; m <= 'z'; ++m)
	putchar(m);
putchar("\n");
return (0);
}
