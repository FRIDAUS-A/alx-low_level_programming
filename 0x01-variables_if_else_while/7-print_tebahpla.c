#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Allow success
*/
int main(void)
{
	char z = 'z';

	while (z >= 'a')
		putchar(z--);
	putchar('\n');
	return (0);
}
