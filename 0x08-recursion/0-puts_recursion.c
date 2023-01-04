#include "main.h"
/**
 * _puts_recursion - a function that prints a string
 * @s: parameter of the function
 * Return: Allow success
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
}
