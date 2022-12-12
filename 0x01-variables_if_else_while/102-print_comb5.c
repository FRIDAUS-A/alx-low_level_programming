#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Allow success
*/
int main(void)
{
	int p, q, r, s;
	
	for (p = 0; p <= 9; p++)
	{
		for (q = 0; q <= 8; q++)
		{
			for (r = q; r <= 9; r++)
			{
				for (s = 0; s <= 9; s++)
				{
					if (!(p == r && q == s) || !(p == q && p == r && p == s && q == r && q == s && s == r))
					{
					putchar(p + '0');
					putchar(q + '0');
					putchar(' ');
					putchar(r + '0');
					putchar(s + '0');
					if (!(p == 9 && q == 8 && r == 9 && s == 9))
					{
					putchar(',');
					putchar(' ');
					}
					}

				}
			}
		}
	}
	putchar('\n');
	return (0);
}
