#include "main.h"
/**
 * print_rev - a function that prints a string in reverse
 * @s: parameter of the function
 * Return: Allow success
*/
void print_rev(char *s)
{
	int len = 0;

	while(s[len])
	{
		len++;
	}
	while (len)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
