#include "main.h"
/**
 * _strcat - a function that concatenates two string
 * @dest: first parameter
 * @src: second parameter
 * Return: Allow success
*/
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int len_dest = 0;

	while (dest[count])
	{
		len_dest++;
		count++;
	}
	for (count = 0; *(src + count); count++)
	{
		*(dest + len_dest++) = *(src + count);
	}
*(dest + len_dest) = '\0';
	return (dest);
}
