#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: parameter of the function
 * Return: Allow success
*/
void _print_rev_recursion(char *s)
{
	int n = 1;

	if (*s != '\0')
	{
		if (*(s + n) != '\0')
		{
			_putchar(*s);
			s--;
			n++;
			_print_rev_recursion(s);
		}
		else
		{
			s++;
			_print_rev_recursion(s);
		}
	}
	else
		_putchar('\n');
}
