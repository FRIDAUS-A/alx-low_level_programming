#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: list of all type of arg passed
 * Return: Allow success
*/
void print_all(const char * const format, ...)
{
	va_list input;
	int i = 0;

	va_start(input, format);
	while (format[i])
	{
		if (format[i] == 'c')
			printf("%c", va_arg(input, int));
		else if (format[i] == 'i')
			printf("%i", va_arg(input, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(input, double));
		else if (format[i] == 's')
			printf("%s", va_arg(input, char *));
		if (format[i])
			printf(", ");
		i++;
	}
	va_end(input);
	printf("\n");
}
