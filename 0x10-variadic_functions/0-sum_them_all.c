#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of integers
 * Return: Allow success
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list input;
	unsigned int i = 0;
	int result = 0;
	
	if (n == 0)
		return (0);
	va_start(input, n);
	while (i < n)
	{
		result = result + va_arg(input, int);
	}
	va_end(input);
	return (result);
}
