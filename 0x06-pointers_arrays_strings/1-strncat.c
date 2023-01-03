#include "main.h"
/**
  * _strncat - a function that concatenates two string
  * @dest: 1st parameter
  * @src: 2nd parameter
  * @n: third parameter
  * Return: Allow success
*/
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, len_dest = 0;

	while (*(dest + count++))
		len_dest++;
	for (count = 0; *(src + count) && count < n; count++)
		*(dest + len_dest++) = *(src + count);
*(src + len_dest) = '\0';
	return (dest);
}
