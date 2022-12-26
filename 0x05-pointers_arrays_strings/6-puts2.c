#include "main.h"
/**
 * puts2 - a function that prints everyother character in the string
 * @str: parameter of the function
 * Return: Allow success
*/
void puts2(char *str)
{
	int len = 0;

	while (*(str + len))
	{
		if (len % 2 == 0)
		{
			_putchar(*(str + len));
		}
		len++;
	}
	_putchar('\n');
}
