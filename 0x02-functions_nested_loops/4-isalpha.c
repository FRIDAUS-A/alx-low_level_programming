#include "main.h"
/**
 * _isalpha - A function that checks if a character is a letter.
 * @c: parameter of the function
 * Return: Allow success
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
