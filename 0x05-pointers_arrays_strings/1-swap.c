#include "main.h"

/**
 * swap_int - swaps the values of two integers it takes as
 * its parameters.
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
