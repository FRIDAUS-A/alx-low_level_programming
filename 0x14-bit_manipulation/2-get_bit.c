#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index to the printed
 * Return: Allow success
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;
	unsigned long int num;
	int *array_int;

	while (n > 1)
	{
		num = n >> 1;
		array_int[count++] = (n - (num << 1));
		n = n >> 1;
	}
	if (n == 1)
		array_int[count] = 1;
	return (array_int[index]);
}
