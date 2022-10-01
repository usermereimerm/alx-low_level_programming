#include<stdio.h>

/**
 * main - prints multiplication of 2 no.s
 * @argc: no. of arguments
 * @argv: array of pointers to arg
 * Return: 0
 */
int main(argc, char *argv[])
{
	int n1, n2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mul = n1 * n2;
	printf("%d\n", mul);
	return (0);
}
