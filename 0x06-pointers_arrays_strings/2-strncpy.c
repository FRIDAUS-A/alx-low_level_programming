#include "main.h"
/**
  * _strncpy - a function that concatenates two string
  * @dest: 1st parameter
  * @src: 2nd parameter
  * @n: third parameter
  * Return: Allow success
*/
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0, len_src = 0;

	while (*(dest + count++))
		len_src++;
		while (*(src + count) && count < n)
		{
			if (count < len_src)
				*(dest + count) = *(src + count++);
			else
				dest[count] = '\0';
		}
	return (dest);
}
