#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by sr.
 * @dest: first parameter
 * @src: second parameter
 * Return: Allow success
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
