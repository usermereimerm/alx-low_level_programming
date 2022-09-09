#include<stdio.h>
#include<stdlib.h>
/**
 *  Description: main - prints out all possible combination
 *  of two digits.
 *  Return: 0 if successful.
 */
int main(void)
{
int A, B;
for (A = 0; A < 9; A++)
	for (B = A + 1; B < 10; B++)
	{
		putchar((A % 10) + '0');
		putchar((B % 10) + '0');
		if (A == 8 && B == 9)
			continue;
		putchar(',');
		putchar(' ');
}
putchar('\n');
return (0);
}
