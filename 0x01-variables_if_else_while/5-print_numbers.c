#include<stdio.h>
#include<stdlib.h>
/**
 *  Description: main - prints out all single digit numbers
 *  of base 10 starting from 0.
 *  Return: 0 if successful.
 */
int main(void)
{
char number;
for (number = '0'; number <= '9'; number++)
	putchar(number);
putchar('\n');
return (0);
}
