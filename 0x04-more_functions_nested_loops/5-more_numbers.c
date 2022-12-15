#include "main.h"

/**
 * more_numbers -  a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: Allow success
*/

void more_numbers(void)
{
	int a;
	
	for (n = 0; n <= 9; n++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
