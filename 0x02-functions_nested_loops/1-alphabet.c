#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: A function that prints alphabets in lowercase
 * Return: Allow success
*/
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
