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

	while (*(src + count++))
		len_src++;
	count = 0;
		while (count < n && src[count])
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = '\0';
		return (dest);
}
