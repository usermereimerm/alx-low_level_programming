#include "main.h"

/**
 * Description - print_number prints numbers from 0 to 9
 * print_numbers: prints numbers from zero to nine followed
 * by a new line.
 * Return: nothing
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar((i % 10) + '0');
	_putchar('\n');
}
