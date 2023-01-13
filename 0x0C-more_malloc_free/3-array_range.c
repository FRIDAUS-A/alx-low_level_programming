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
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	ptr[0] = min;
	for (a = 1; a < (max - min + 1); a++)
		ptr[a] = ptr[a - 1] + a;
	return (ptr);
}
