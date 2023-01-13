#include <stdlib.h>
/**
 * malloc_checked - a function that allocate memory
 * using malloc.
 * @b: parameter of the function
 * Return: Allow success
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
		return (ptr);
}
