#include "main.h"
/**
 * print_sign - A function that prints the sign of a number
 * @n: parameter of the function
 * Return: Allow success
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
