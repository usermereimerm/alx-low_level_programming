#include "main.h"

/**
 * puts2 - prints every other character (even) starting with first character
 * @str: the string to be printed
 * Return: nothing
 */
void puts2(char *str)
{
	int len = 0, index;

	while (s[index++])
		len++;
	for (index = 0; index < len; index += 2)
		_putchar(str[index]);
	_putchar('\n');
}
