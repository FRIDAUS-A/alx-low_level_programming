#include "main.h"
/**
 * jack_bauer - a function that prints every minute of the time
 *
 * Return: Allow success
*/
void jack_bauer(void)
{
	int a, c, d;

	for (a = 0; a <= 23; a++)
	{
		for (c = 0; c <= 5;  c++)
		{
			for (d = 0; d <= 9; d++)
			{
					_putchar((a / 10) + '0');
					_putchar((a % 10) + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
			}
				d = 0;
		}
			c = 0;
	}
}
