#include "variadic_functions.h"

/**
 * print_int - print int
 * @input: parameter of the function
 * Return: Allow success
*/
void print_int(va_list input)
{
	printf("%d", va_arg(input, int));
}

/**
 * print_char - print char
 * @input - parameter
 * Return: Allow success
*/
void print_char(va_list input)
{
	printf("%c", va_arg(input, int));
}

/**
 * print_float - print float
 * @input: parameter
 * @Return: Allow success
*/
void print_float(va_list input)
{
	printf("%f", va_arg(input, double));
}

/**
 * print_string - print string
 * @input: parameter
 * @Return: Allow success
*/
void print_string (va_list input)
{
	char *str = va_arg(input, char *);

	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}

/**
 * print_all - print all
 * @format: parameter that receive the format to be
 * printed to the standard output
 * Return: Alllow success
*/
void print_all(const char *format, ...)
{
	new func[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
	};
	int i = 0, j;
	va_list input;
	
	if (format == NULL)
		return;
	va_start(input, format);
	while (*(format + i) && format)
	{
		j = 0;
		while (func[j].name != format[i] && j < 4)
			j++;
		if (func[j].name == format[i])
			func[j].ptr(input);
		if (format[i + 1] && func[j].name == format[i])
			printf(", ");
		i++;
	}
	va_end(input);
	printf("\n");
}
