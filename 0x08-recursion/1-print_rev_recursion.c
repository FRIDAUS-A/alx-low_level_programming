#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: parameter of the function
 * Return: Allow success
*/
void _print_rev_recursion(char *s)
{
	int n = 0;
	if (*(s + n) != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	else if (*(s + n) == '\0')
	{
		s--;
		n++;
		_putchar(*s);
		_print_rev_recursion(s);
	}
}
