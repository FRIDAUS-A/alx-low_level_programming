#include "main.h"
/**
  * _strncat - a function that concatenates two string
  * @dest: 1st parameter
  * @src: 2nd parameter
  * @n: third parameter
  * Return: Allow success
*/
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (*(src + count) && count < n)
		*(dest + count) = *(src + count++);
*(dest + count) = '\0';
	return (dest);
}
