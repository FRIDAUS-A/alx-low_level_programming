#include "main.h"
/**
 * times_table - a function that prints the 9 times table.
 *
 * Return: Allow success
*/
void times_table(void)
{
	int i = 0, n;

	while (i <= 9)
	{
		for (n = 0; n <= 9; n++)
		{
			if ((i * n) >= 10)
			{
				_putchar((i * n) / 10 + '0');
				_putchar((i * n) % 10 + '0');
			}
			else if ((i * n) < 10)
			{
				_putchar((i * n) + '0');
			}
			if ((i * (n + 1)) >= 10)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
}
