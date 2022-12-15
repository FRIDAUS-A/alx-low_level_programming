#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: parameter of the function
 * Return: Allow success
*/
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}
	_putchar('\n');
}
