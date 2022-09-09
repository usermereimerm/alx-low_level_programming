#include<stdio.h>
#include<stdlib.h>
/**
 *  Description: main - prints out all single digit numbers of base 10
 *  starting from 0 without the use of char identifier.
 *  Return: 0 if successful.
 */
int main(void)
{
int number;
for (number = 0; number < 10; number++)
	putchar((number % 10) + '0');
putchar('\n');
return (0);
}
