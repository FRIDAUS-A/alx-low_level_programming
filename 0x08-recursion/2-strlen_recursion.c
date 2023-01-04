#include "main.h"
/**
 * strlen_recursion - a function that returns the length of a string
 * @s: parameter of the function
 * REturn: Allow success
*/
int _strlen_recursion(char *s)
{
	int len_s = 0;

	if (*s)
	{
		len_s++;
		_strlen_recursion(s);
	}
	return (len_s);
}
