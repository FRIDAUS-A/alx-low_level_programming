#include "main.h"
#include <stdio.h>
/**
 * rev_string  - a function that reverses a string
 * @s: parameter of the function
 * Return: Allow success
*/
void rev_string(char *s)
{
	int i = 0, len = 0, half;
	char *p;

	while (s[len])
	{
		len++;
	}
	len = len - 1;
	half = len / 2;
	while (half <= len)
	{
		*p = *(s + i);
		*(s + i) = *(s + len);
		*(s + len) = *p;
		i++;
		len--;
	}
}
