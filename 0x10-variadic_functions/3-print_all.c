#include "variadic_functions.h"

/**
 * print_char - prints character
 * @input: input
 * Return: Allow success
*/
void print_char(va_list input)
{
	char letter = va_arg(input, int);

	printf("%c", letter);
}

/**
 * print_int - prints integer
 * @input: input
 * Return: Allow success
*/
void print_int(va_list input)
{
	int num = va_arg(input, int);

	printf("%i", num);
}

/**
 * print_float - prints float
 * @input: input
 * Return: Allow success
*/
void print_float(va_list input)
{
	float decimal = va_arg(input, int);

	printf("%f", decimal);
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
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};

	va_start(input, format);
	while (format[i] && format)
	{
		j = 0;
		while (format[i] != *(func[j].name) && j <  4)
		{
			j++;
		}
		if (format[i] == *(func[j].name))
			func[j].ptr(input);
		if (format[i])
			printf(", ");
		i++;
	}
	va_end(input);
	printf("\n");
}
