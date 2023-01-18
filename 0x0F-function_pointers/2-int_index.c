#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: array of numbers
 * @size: size of an array
 * @cmp: a pointer to the function that compare
 * Return: Allow success
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0)
		return (-1);
	while (size--)
	{
		if ((*cmp)(index++) != 0)
			return (index);
	}
	return (-1);
}
