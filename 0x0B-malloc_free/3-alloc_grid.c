#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array
 * @width: 1st parameter
 * @height: 2nd parameter
 * Return: Allow success
*/
int **alloc_grid(int width, int height)
{
	int **ptr, i, j;
	/* i rep width count */
	/* j rep height count */
	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		*(ptr + j) = (int *)malloc(sizeof(int) * width);
		if (*(ptr + j) == NULL)
		{
			for (; j >= 0; j--)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
		for (i = 0; i < width; i++)
			(*(ptr + j))[i] = 0;
	}
	return (ptr);
}
