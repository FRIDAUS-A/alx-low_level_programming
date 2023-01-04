#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: parameter of the function
 * Return: Allow success
*/
void _print_rev_recursion(char *s)
{
	int n = 0, pos = 0;

	if (*(s + pos + n) != '\0')
	{
		pos++;
		_print_rev_recursion(s);
	}
	else if (*(s + pos + n) == '\0' && pos != 0)
	{
		pos--;
		n++;
		_putchar(*(s + pos));
		_print_rev_recursion(s);
	}
	else 
		_putchar('\n');
}
