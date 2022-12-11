#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Allow success
*/
int main(void)
{
	int p = 0, q = 0, r = 0, s = 0;

	while (p < 9)
	{
		while (q < 9)
		{
			while (r < 9)
			{
				while (s < 9)
				{
					putchar(p + '0');
					putchar(q + '0');
					putchar(' ');
					putchar(r + '0');
					putchar(s + '0');
					putchar(',');
					s++;
				}
				r++;
			}
			q++;
		}
		p++;
	}
	return (0);
}
