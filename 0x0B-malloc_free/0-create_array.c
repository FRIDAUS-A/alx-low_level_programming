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
	unsigned int i = 0;

	ptr = (char *)malloc(size * sizeof(char));
	if (size == 0 || ptr == NULL)
		return (NULL);
	while (i < size)
		*(ptr + i++) = c;
	return (ptr);
}
