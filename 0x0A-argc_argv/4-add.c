#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints the sum of two numbers
 * @argc: number of arguments passed
 * @argv: array of pointers to argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n1, n2, sum;

	for (n1 = 1; n1 < argc; n1++)
	{
		for (n2 = 0; argv[n1][n2]; n2++)
		{
			if (argv[n1][n2] < '0' || argv[n1][n2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[n1]);
	}
	printf("%d\n", sum);
	return (0);
}
