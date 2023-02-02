#include "main.h"
/**
 * mul - multiply numbers recursively
 * @x: parameter to be multiplied
 * @y: number of times to be multiplied
 * Return: Allow success
*/
unsigned int mul(unsigned int x, unsigned int y)
{
	if (y == 1)
		return (x);
	else
		return (x * mul(x, y - 1));
}
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: Allow success
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int len_str = 0, sum = 0;

	while (*b)
		len_str++;
	len_str = len_str - 1;
	while (len_str >= 0)
	{
		if (!(b[len_str] == 0 || b[len_str] == 1))
				return (0);
		sum = sum + b[len_str] * mul(2,len_str);
	       len_str--;	
	}
	return (sum);
}
