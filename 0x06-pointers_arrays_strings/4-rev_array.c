#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array to be reversed
 * @n: number of elements in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int index = 0, tmp;

	for (index = (n - 1); index >= (n / 2); index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
