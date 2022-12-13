#include "main.h"
/**
 * print_alphabet_x10 - A function that prints 10 times the alphabet
 *
 * Return: Allow success
*/
void print_alphabet_x10(void)
{
	char a = 'a';
	int i;

	for (i = 0; i <= 9; i++)
	{
		while (a <= 'z')
		{
			_putchar(a++);
		_putchar('\n');
		}
	}
}
