#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: number to be converted
 * Return: Allow success
*/
void print_binary(unsigned long int n)
{
	unsigned long int num;
	
	if (n == 0)
		_putchar(0 + '0');
	if (n >= 1)
	{
		num = (n >> 1);
		if (n == 1)
			_putchar(1 + '0');
		else
		{
			print_binary(n >> 1);
			_putchar((n - (num << 1)) + '0');
		}
	}
}
