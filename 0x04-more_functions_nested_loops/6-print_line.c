#include "main.h"

/**
 * print_line - prints a straight horizontal line in the
 * terminal based on the size specified.
 * @n: specifies the size of line
 *
 * Return: nothing.
 */
void print_line(int n)
{
	while (n-- > 0)
	{
			_putchar('_');
	}
		_putchar('\n');
}
