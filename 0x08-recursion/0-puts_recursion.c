#include "main.h"
/**
 * _puts_recursion - a function that prints the length of a string followed by a new line
 * @s: parameter of the function
 * Return: Allow success
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s++);
		_puts_recursion(*s);
	}
	_putchar('\n');
}
