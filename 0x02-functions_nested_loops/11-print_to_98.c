#include "main.h"

/**
 * print_to_98 - prints the set of natural numbers from a given number
 * to 98.
 * Return: 0 if successful.
 */
void print_to_98(int n)
{
	int n;

	for (n = n; n <= 98; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	return (n);
}
