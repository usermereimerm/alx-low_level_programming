#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: 0 if successful.
 */
void times_table(void)
{
	int n, i, mul;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 10; i++)
		{
			mul = (n * i);
			_putchar(mul + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
