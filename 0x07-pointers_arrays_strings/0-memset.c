#include "main.h"
/**
 * _memset - a function that fills the memory with a constant byte
 * @s: first parameter
 * @b: second parameter
 * @n: third parameter
 * Return: Allow success
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int len_s, count;

	while (*s)
		len_s++;
	for (count = 0; count < n && *(s + count) != '\0'; count++)
	{
		*(s + count) = b;
	}
	return (s);
}
