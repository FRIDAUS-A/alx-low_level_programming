#include "variadic_functions.h"

/**
 * print_char - prints character
 * @input: input
 * Return: Allow success
*/
void print_char(va_list input)
{
	printf("%c", va_arg(input, int));
}

/**
 * print_int - prints integer
 * @input: input
 * Return: Allow success
*/
void print_int(va_list input)
{
	printf("%i", va_arg(input, int));
}

/**
 * print_float - prints float
 * @input: input
 * Return: Allow success
*/
void print_float(va_list input)
{
	printf("%f", va_arg(input, double));
}

/**
 * print_string - print string
 * @input: input
 * Return: Allow success
*/

void print_string(va_list input)
{
	char *str;

	str = va_arg(input, char *);
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}
/**
 * print_all - a function that prints anything
 * @format: list of all type of arg passed
 * Return: Allow success
*/
void print_all(const char * const format, ...)
{
	va_list input;
	int i = 0, j = 0;
	new func[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
	};

	va_start(input, format);
	while (format[i] && format)
	{
		j = 0;
		while (format[i] != func[j].name && j <  4)
		{
			j++;
		}
		if (format[i] == func[j].name)
			func[j].name;
		if (format[i])
			printf(", ");
		i++;
	}
	va_end(input);
	printf("\n");
}
