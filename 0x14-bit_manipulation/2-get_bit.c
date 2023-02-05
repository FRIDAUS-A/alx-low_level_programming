#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index to the printed
 * Return: Allow success
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0, len_bin = 0;
	unsigned long int tmp, num;
	int *array_int;

	if (n >= 64)
		return (-1);
	tmp = n;
	while (n > 1)
	{
		num = n >> 1;
		n = n >> 1;
		len_bin++;
	}
	len_bin = len_bin + 1;
	array_int = malloc(len_bin * sizeof(int));
	if (array_int == NULL)
		return (-1);
	n = tmp;
	while (n > 1)
	{
		num = n >> 1;
		array_int[count++] = n - (num << 1);
		n = n >> 1;
	}
	if (n == 1)
		array_int[count] = 1;
	tmp = array_int[index];
	free(array_int);
	return (tmp);
}
