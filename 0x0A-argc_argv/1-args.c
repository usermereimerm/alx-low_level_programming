#include<stdio.h>

/**
 * main - prints the number of arguents passed to it
 * @argc: number of argments
 * @argv: array of pointers to arguments
 * Return: 0
 */
int main (int argc, char *__attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
