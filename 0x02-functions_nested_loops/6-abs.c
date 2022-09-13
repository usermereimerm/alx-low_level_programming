#include<stdio.h>
#include<stdlib.h>

int _abs(int);

/**
 * Description: main - uses a function to compute
 * the absolute value of a number.
 * Return: 0 if successful
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}

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
