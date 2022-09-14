#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the first 50 fibonacci numbers.
 * Return: 0 if successful.
 */
int main(void)
{
	int cur, prev, next, i;

	cur = 1;
	prev = i = 0;
	for (i = 0; i < 50; i++)
	{
		next = (cur + prev);
		printf("%d, ", next);
		prev = cur;
		cur = next;
	}
	return (0);
}
