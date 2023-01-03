#include "main.h"
/**
 * _strcat - a function that concatenates two string
 * @dest: first parameter
 * @src: second parameter
 * Return: Allow success
*/
char *_strcat(char *dest, char *src)
{
	int count = 0; int len_dest = 0;

	while (*dest)
	{
		len_dest++;
		dest++;
	}
	while (*(src + count))
	{
		*(dest + len_dest) = *(src + count);
		len_dest++;
		count++;
	}
	return (dest);
}
