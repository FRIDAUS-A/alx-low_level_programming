#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers,
 * followed by a new line.
 * @separator: seperator between the integers
 * @n: number of integers
 * Return: Allow success
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list input;
	unsigned int i = 0;

	va_start(input, n);
	while (i < n)
	{
		printf("%d", va_arg(input, int));
		if (i != n - 1 && seperator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(input);
	printf("\n");
}
