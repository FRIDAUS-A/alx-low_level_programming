#include "main.h"
/**
 * print_triangle - a function that prints a truangle
 * @size: parameter of the function
 * Return: Allow success
*/
void print_triangle(int size)
{
	int a, b, c;

	for (a = 1; a <= size; a++)
	{
		for (b = 0; b < (size - a); b++)
		{
			_putchar(' ');
		}
		for (c = 0; c < a; c++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
