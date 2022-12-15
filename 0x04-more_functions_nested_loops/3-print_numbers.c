#include "main.h"

/**
 * print_numbers - a function that prints numbers from 0 to 9
 *
 * Return: Allow success
*/

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		_putchar(a + '0');
	_putchar('\n');
}
