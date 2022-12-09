#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Allow success
*/
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if ((a != 'q') && (a != 'e'))
			putchar(a++);
	}
	return (0);
}
