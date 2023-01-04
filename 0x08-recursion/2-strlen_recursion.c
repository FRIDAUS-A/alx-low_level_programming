#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: parameter of the function
 * Return: Allow success
*/
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 +  _strlen_recursion(s));
	}
	else
		return (0);
}
