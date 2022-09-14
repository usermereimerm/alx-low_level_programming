#include "main.h"

/**
 * print_times_table - prints n times table for
 * any given integer n.
 * @n: size of times table
 * Return: n if succesful
 */
void print_times_table(int n)
{
	int n, i, mul, a;

	if (n > 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (i = 0; i <= n; i++)
			{
				mul = (a * i);
				_putchar(mul);
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	return (mul);
}
