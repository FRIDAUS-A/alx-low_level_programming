#include "main.h"
#include <stdio.h>
/**
 * rev_string  - a function that reverses a string
 * @s: parameter of the function
 * Return: Allow success
*/
void rev_string(char *s)
{
	int i = 0, len = 0;
	char temp;

	while (s[len])
	{
		len++;
	}
	len = len - 1;
	while (len >= 0)
	{
		temp = *(s + len);
		*(s + i++) = temp;
		len--;

	}
	*(s + i) = '\0';
}