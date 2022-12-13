#include "main.h"
/**
 * times_table - a function that prints the 9 times table.
 *
 * Return: Allow success
*/
void times_table(void)
{
	int i = 0, n = 0;

	while (i <= 9)
	{
		while (n <= 9)
		{
		_putchar(i * n + '0');
		_putchar(',');
		_putchar(' ');
		n++;
		}
		_putchar('\n');
		i++;
	}
}
