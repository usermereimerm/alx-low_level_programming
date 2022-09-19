#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array to be printed
 * @n: number of members of array to be printed
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
		printf("%d", a[index]);
	if (index == n - 1)
		continue;
	printf(", ");
}
