#include "function_pointers.h"

/**
 * print_name - prints a name according to a function
 * passed to it as argument
 * @name: name to be printed which will be passed as
 * argument to function pointer
 * @f: function pointer
 * Return:: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
