#include "main.h"

/**
 * _abs - returns absolute value of an integer
 * @c: number whose absolute value is required
 * Return: 0 if successful
 */
int _abs(int c)
{
	if (c < 0)
		c = (c * (-1));
	else
		c = c;
}
