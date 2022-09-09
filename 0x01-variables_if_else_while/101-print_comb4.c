#include<stdio.h>
#include<stdlib.h>
/**
 *  Description: main - prints out all possible different combination
 *  of three digits with the use of putchar without variable type char
 *  Return: 0 if successfuk.
 */
int main(void)
{
int A, B, C;
for (A = 0; A < 8; A++)
	for (B = A + 1; B < 9; B++)
		for (C = B + 1; C < 10; C++)
		{putchar((A % 10) + '0');
putchar((B % 10) + '0');
putchar((C % 10) + '0');
if (A == 7 && B == 8 && C == 9)
	continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
