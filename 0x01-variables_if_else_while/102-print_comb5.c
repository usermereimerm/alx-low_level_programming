#include<stdio.h>
#include<stdlib.h>
/**
 *  Description: main - prints out all possible combinations of two two-digit
 *  number using putchar without char data type
 *  Return: 0 if successful.
 */
int main(void)
{
int a, b;
for (a = '00'; a < '89'; a++)
	for (b = a + 1; b < '99'; b++)
	{putchar((a % 10) + '0');
		putchar(' ');
		putchar((b % 10) + '0');
		putchar(',');
		if (a == 98 && b == 99)
			continue;
	}
putchar('\n');
return (0);
}
