#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Allow success
*/
int main(void)
{
	char x = '0';
	char a = 'a';

	while (x <= '9')
		putchar(x++);
	while (a <= 'f')
		putchar(a++);
	putchar('\n');
	return (0);
}
