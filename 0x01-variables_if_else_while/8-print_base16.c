#include<stdio.h>
#include<stdlib.h>
/**
 *  Description: main - prints out all the numbers of base 16
 *  in lower case.
 *  Return: 0 if successful.
 */
int main(void)
{
char base16;
for (base16 = '0'; base16 <= '9'; base16++)
	putchar(base16);
for (base16 = 'a'; base16 <= 'f'; base16++)
	putchar(base16);
putchar('\n');
return (0);
}
