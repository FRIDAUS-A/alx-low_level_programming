#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct new - a new data type
 * @name: hold the name
 * @ptr: holds the address of the fxn
*/
typedef struct new
{
	char *name;

	void (*ptr)(va_list);
} new;

/* new is the typedef for struct new */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list input);
void print_int(va_list input);
void print_float(va_list input);
void print_string(va_list input);

#endif /* VARIADIC_FUNCTIONS_H */
