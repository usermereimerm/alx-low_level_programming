#include "main.h"

/**
 * _puts - prints out a string to stdout
 * @str: the string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
