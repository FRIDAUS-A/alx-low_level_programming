#include "search_algos.h"
/**
 * linear_search - a function that searches for a value in an array
 * @array: array of numbers
 * @size: size of the array
 * @value: value to search
 * Return: Allow success
 */

int linear_search(int *array, size_t size, int value)
{
size_t count = -1;

if (array)
{
for (count = 0; count < size; count++)
{
if (value == array[count])
{
return (count);
}
}
}
else
{
count = -1;
return (count);
}
count = -1;
return (count);
}
