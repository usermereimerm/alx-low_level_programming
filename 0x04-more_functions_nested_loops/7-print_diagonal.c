#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints a diagonal
 * @n: number of diagonal length
 * Return: nothing
 */

void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
