#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Allow success
*/
int main(void)
{
	int x = 0;
	int a, b = 0;

	while (x < 9)
	{
		for (a = b; a <= 9; a++)
		{
			if (a != b)
			{
			putchar(x + '0');
			putchar(a + '0');
			if (!(x == 8 && a == 9))
			{
			putchar(',');
			putchar(' ');
			}
			}
		}
		b++;
		x++;
	}
	putchar('\n');
		return (0);
}
