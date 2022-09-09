#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 *  Description: main - prints a random number to a variable n and
 *  print whether n is positive or negative
 *  Return: 0 if successful
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d ", n);
if (n > 0)
	printf("is positive\n");
else if (n < 0)
	printf("is negative\n");
else
	printf("is zero\n");
return (0);
}
