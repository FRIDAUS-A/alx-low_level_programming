#include "search_algos.h"

/**
 * binary_search - a function that searches for a value
 * @array: array of integers
 * @size: size of integers
 * @value: value to search
 * Return: Allow Success
 */

int binary_search(int *array, size_t size, int value)
{
size_t left = 0, middle, index;
size_t right = size - 1;

if (array == NULL)
{
return (-1);
}
while (left < right)
{
printf("Searching in array: ");
index = left;
while (index <= right)
{
printf("%ld", index);
if (index != right)
{
printf(",");
}
index++;
}
printf("\n");
middle = array[(left + right)/2];
if (array[middle] < value)
{
left = middle + 1;
}
else if (array[middle] > value)
{
right = middle - 1;
}
else if (array[middle] == value)
{
return (middle);
}
}
return (-1);
}
