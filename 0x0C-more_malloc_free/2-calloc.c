#include <stdlib.h>
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

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
