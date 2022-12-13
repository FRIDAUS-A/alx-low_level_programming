#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers from n to 98.
 * @n: parameter of the function
 * Return: Allow success
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar((n++) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar((n--) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	return;
}
int main(void)
{
	print_to_98(0);
	print_to_98(111);
	print_to_98(-10);
	return (0);
}
