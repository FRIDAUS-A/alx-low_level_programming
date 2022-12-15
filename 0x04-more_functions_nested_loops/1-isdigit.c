#include "main.h"

/**
 * _isdigit - a function that for a digit (0 through 9)
 * @c: parameter of the function
 * Return: Allow success
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
	_putchar('\n');
}
