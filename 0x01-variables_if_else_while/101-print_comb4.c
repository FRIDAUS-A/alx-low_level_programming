#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Allow success
*/
int main(void)
{
	int x = 0, y = 0, z = 0, b = 0, c = 0;

	while (x < 8)
	{
		for (y = b; y < 9; y++)
		{
			for (z = c; z <= 9; z++)
			{
				if (!( x == y || x == z || y == z))
				{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (!(x == 7 && y == 8 && z == 9))
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
		x++;
	}
	putchar ('\n');
	return (0);
}
