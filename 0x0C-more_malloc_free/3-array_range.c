#include <stdlib.h>
#include "main.h"
/**
 * array_range - a function that create an array of integers
 * @min: first parameter
 * @max: second pàrameter
 * Return: Allow success
*/
int *array_range(int min, int max)
{
	int *ptr, a;

	if (max > min)
		return (NULL);
	ptr = (int *)malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < (max - min + 1); a++)
		ptr[a] = min++;
	return (ptr);
}
