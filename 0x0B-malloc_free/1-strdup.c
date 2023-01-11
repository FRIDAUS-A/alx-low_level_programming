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
	int len_str = 0, i = 0;

	while (*(str + i))
	{
		len_str++;
		i++;
	}
	if (*str == NULL)
		return (NULL);
	ptr = (char *)malloc((len_str + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len_str; i++)
		*(ptr + i) = *(str + i);
	*(ptr + len_str) = '\0';
	return (ptr);
}
