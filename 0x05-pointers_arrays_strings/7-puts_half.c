#include "main.h"

/**
 * puts_half - prints half of a string if length of string is odd
 * it prints last n characters where n is specified.
 * @str: string to be printed
 * Return: nothing
 */
void puts_haf(char *str)
{
	int len = 0, index, n;

	while (str[index++])
		len++;
	n = ((len - 1) / 2);
	if ((len % 2) == 0)
		n = (len / 2);
	else
		n = ((len - 1) /2);
	for (index = n; index < len; index++)
		_putchar(str[index]);
	_putchar('\n');
}
