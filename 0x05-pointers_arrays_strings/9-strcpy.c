#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by sr.
 * @dest: first parameter
 * @src: second parameter
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	_putchar('\0');
	_putchar('\n');
	return (dest);
}
