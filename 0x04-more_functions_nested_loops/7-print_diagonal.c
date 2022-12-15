#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: parameter of the function
 * Return: Allow success
*/
void print_diagonal(int n)
{
	int a = 0, b = 0;

	for (a = 0; a < n; a++)
	{
		while (b < n)
		{
			_putchar(' ');
			a++;
		}
		_putchar('\\');
		b++;
	}
	_putchar('\n');
}
