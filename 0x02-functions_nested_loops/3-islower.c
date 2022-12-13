#include "main.h"
/**
 * _islower - A function that checks for lowercase character
 * @c: parameter of the function
 * Return: Allow success
*/
int _islower(int c)
{
	if (c >= 'a' &&  c <= 'z')
		return (1);
	else
		return (0);
}
