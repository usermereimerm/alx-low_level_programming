#include "main.h"

/**
 * print_buffer - prints a buffer 10 bytes at a time
 * @b: the buffer to be printed
 * @size: the number of byes to be printed
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int byte, index;

	for (byte = 0; byte < size; byte += 10)
		printf("%08x: ", byte);
	*b = size;
}
