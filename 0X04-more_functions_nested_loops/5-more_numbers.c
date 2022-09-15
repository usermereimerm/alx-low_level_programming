#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * Return: nothing
 */
void more_numbers(void)
{
	int n, i = 0;

	while (i <= 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');
			else
				_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
