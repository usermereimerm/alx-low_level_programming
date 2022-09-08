#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/**
 * Description: main - prints out a string to stdout
 * Return: 0 if successful.
 */
int main(void)
{
write(1, "and that piece of art is useful\" - Dora korpar, 2015-10-19", 59);
return (0);
}
