#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: parameter of the function
 * Return: Allow success
*/
void print_line(int n)
{
	int a;

	for (a = 0; a < n; n++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
