#include<stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle on the webterm
 * @size: size of triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int c1, c2;

	if (size > 0)
	{
		for (c1 = 1; c1 <= size; c1++)
		{
			for ((c2 = size - c1); c2 > 0; c2--)
			{
				_putchar(' ');
			}
			for (c2 = 0 ; c2 < c1; c2++)
			{
				_putchar('#');
			}
			if (c1 == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
