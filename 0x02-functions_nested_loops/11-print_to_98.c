#include "main.h"

/**
 * print_to_98 - prints the set of natural numbers from a given number
 * to 98.
 * @n: the number to begin counting at.
 * Return: 0 if successful.
 */
void print_to_98(int n)
{
	int n;

	if (n >= 98)
	{
		while (n > 98)
			printf("%d\n", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d", n++);
		printf("%d\n", n);
	}
}
