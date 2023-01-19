#include "variadic_functions.h"
/**
 * print_strings -  a function that prints strings,
 * followed by a new line.
 * @separator: separation between the string
 * @n: number of string
 * Return: Allow success
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list input;
	unsigned int i = 0;
	char *z;

	va_start(input, n);
	while (i < n)
	{
		z = va_arg(input, char *);
		if (z != NULL)
			printf("%s", z);
		else
			printf("(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(input);
	printf("\n");
}
