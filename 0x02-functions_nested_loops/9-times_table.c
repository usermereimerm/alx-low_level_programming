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
		_putchar('0');
		for (i = 0; i < 10; i++)
		{
			mul = (n * i);
			if (mult <= 9)
				_putchar(',');
			else
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
		}
		_putchar('\n');
	}
}
