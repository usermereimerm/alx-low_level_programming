#include<stdio.h>
#include<stdlib.h>

int print_sign(int n);

/**
 * main - uses the print_sign function to print the sign of a number n
 * Return: 0 if successful.
 */
int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * print_sign - checks and print the sign of a number.
 * @n: number to be checked
 *
 * Return: 0 if successful.
 */
int print_sign(int n)
{
	if (n > 0)
		printf("+");
	else if (n == 0)
		printf("0");
	else
		printf("-");
}
