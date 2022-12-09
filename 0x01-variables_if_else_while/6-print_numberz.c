#include <stdio.h>
/**
 * main -
 *
 * Return: Allow success
*/
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
