#include<stdio.h>
#include<time.h>
/**
 *  Description: main - assign a random number to a variable n
 *  and prints out the last digit of n.
 *  Return: 0 if successful.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
printf("last digit of = %d is = %d", n, lastDigit);
if (lastDigit > 5)
	printf("and is greater than 5 \n");
else if (lastDigit == 0)
	printf("and is 0 \n");
else if (lastDigit < 6 && lastDigit != 0)
	printf("and is less than 6 and not 0 \n");
return (0);
}