#include "main.h"

int main(void)
{
	char *c;

	c = malloc_checked(sizeof(char) * 1024);
	printf("%p\n", c);
	return (0);
}
