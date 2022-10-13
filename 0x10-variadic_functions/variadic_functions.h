#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

typedef struct printer
}
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
