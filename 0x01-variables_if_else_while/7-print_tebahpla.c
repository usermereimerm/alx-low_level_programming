#include<stdio.h>
#include<stdlib.h>
/**
 *  Description: main - prints out the alphabet letters in lower case
 *  and in reverse order using putchar function
 *  Return: 0 if successful.
 */
int main(void)
{
char alphabet;
for (alphabet = 'z'; alphabet <= 'a'; alphabet--)
	putchar(alphabet);
putchar('\n');
return (0);
}
