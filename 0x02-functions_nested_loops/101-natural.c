#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the sum of all multiples of
 * 3 or 5 below 1024.
 * Return: 0 if succesful
 */
int main(void)
{
	int num, count;

	count = 0;
	num = 0;
	while (num < 1024)
	{
		if ((num % 5 == 0) || (num % 3 == 0))
			count++;
		else
			count = count;
	}
	printf("%d\n", count);
	return (0);
}
