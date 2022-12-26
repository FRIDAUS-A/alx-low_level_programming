#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: parameter of the function
 * Return: Allow success
*/
void puts_half(char *str)
{
	int i= 0, len = 0, n;

	while (*(str + i))
	{
		len++;
		i++;
	}
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;
	while (*(str + n))
	{
		_putchar(*(str + n++));
	}
	_putchar('\n');
}
