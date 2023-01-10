#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function that craete and initialize an array
 * @size: first parameter
 * @c: second parameter
 * Return: Allow success
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i = 0;

	ptr = (char *)malloc(size * sizeof(int));
	if (size == 0 || ptr == NULL)
		return (NULL);
	else
	{
		while (i < size)
			*(ptr + i++) = c;
		return (ptr);
	}
}
