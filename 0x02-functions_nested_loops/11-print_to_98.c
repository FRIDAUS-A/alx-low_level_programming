#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers from n to 98.
 * @n: parameter of the function
 * Return: Allow success
*/
void print_to_98(int n)
{
		while (n < 98 || n > 98)
		{
			if (n >= 0 && n <=  9)
				_putchar(n++ + '0');
			else if (n >= 10 && n < 98)
			{
				_putchar(n / 10 + '0');
				_putchar(n++ % 10 + '0');
			}
			else if (n < -10 && n >= -99)
			{
				_putchar('-');
				_putchar((-1 * n) / 10 + '0');
				_putchar((-1 * n++) % 10 + '0');
			}
			else if (n < 0 && n >= -9)
			{
				_putchar('-');
				_putchar((-1 * n) / 10 + '0');
				_putchar((-1 * n++) % 10 + '0');
			}
			else if (n <= -100)
			{
				_putchar('-');
				_putchar((-1 * n) / 100 + '0');
				_putchar(((-1 * n) % 100) / 10 + '0');
				_putchar((-1 * n++) % 10 + '0');
			}
			else if (n == 99)
			{
				_putchar(n / 10 + '0');
				_putchar(n-- % 10 + '0');
			}
			else if (n >= 100)
			{
				_putchar(n / 100 + '0');
				_putchar((n % 100) / 10 + '0');
				_putchar(n-- % 10 + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar(9 + '0');
		_putchar(8 + '0');
		_putchar('\n');
}
