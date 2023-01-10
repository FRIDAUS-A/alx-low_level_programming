#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns pointer to the newly allocated string
 * @str: parameter of the function
 * Return: Allow success
*/
char *_strdup(char *str)
{
	char *ptr;
	unsigned int len_str = 0, i = 0;

	while (*str)
	{
		len_str++;
		str++;
	}
	ptr = (char *)malloc((len_str + 1) * sizeof(char));
	if (str == NULL || ptr == NULL)
		return (NULL);
	while (i < len_str)
	{
		*(ptr + i) = *(str + i);
		i++;
	}
	*(ptr + len_str) = '\0';
	return (ptr);
}
