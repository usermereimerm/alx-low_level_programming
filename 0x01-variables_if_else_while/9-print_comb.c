#include<stdio.h>
#include<stdlib.h>
/**
 *  Description: main - prints out all possible combination
 *  of single digit numbers in ascending order without the
 *  use of char identifier.
 *  Return: 0 if successful.
 */
int main(void)
{
int digit;
for (digit = 0; digit < 10; digit++)
{putchar((digit % 10) + '0');
if (digit == 9)
	continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
