#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Allow success
*/
int main(void)
{
	char a = 'a';

		while (a <= 'z' && a != 'q' && a != 'e');
		putchar(a++);
		putchar('\n');
	return (0);
}
