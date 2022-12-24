#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: parameter of the function
 * Return: Allow success
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
