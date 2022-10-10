#include<stdio.h>

/**
 * main - uses a macro to print
 * the name of the source file
 * Return: 0 if success
 */
int main(void)
{
	printf("%s", __FILE__);
	return (0);
}
