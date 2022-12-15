#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: parameter of the function
 * Return: Allow success
*/
void print_diagonal(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		for (a = 0; a < n; a++)
		{
			_putchar(' ');
			a++;
		}
		_putchar('\\');
	}
	_putchar('\n');
}
