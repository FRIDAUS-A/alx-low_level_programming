#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Allow success
*/
int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
		putchar(a++);
	do
	{
		putchar(A++);
	} while (A <= 'Z');
	putchar('\n');
	return (0);
}
