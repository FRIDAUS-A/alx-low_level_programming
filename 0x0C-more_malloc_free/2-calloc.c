#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - a function that allocate memory using malloc
 * @nmemb: number of elements
 * @size: size of the element type
 * Return: Allow success
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	filler = ptr;
	for (index = 0; index < (nmemb * size); index++)
		filler[index] = '\0';
	return (ptr);
}
