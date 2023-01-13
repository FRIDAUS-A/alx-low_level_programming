#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - a function that allocate memory
 * using malloc.
 * @b: parameter of the function
 * Return: Allow success
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
