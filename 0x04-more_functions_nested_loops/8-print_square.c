#include "main.h"
/**
 * print_square - a function that print square followed by a new line
 * @size: parameter of the function
 * Return: Allow succes
*/
void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
