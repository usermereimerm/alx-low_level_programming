#include<stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: no. of arguments
 * @argv: arrays of pointers to argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);
	return (0);
}
