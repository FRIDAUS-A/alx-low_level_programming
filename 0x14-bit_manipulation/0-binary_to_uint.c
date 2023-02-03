#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - covert from binary to decimal
 * @b: binary value to be converted
 * Return: Allow success
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int len_b = 0, sum = 0, index = 0, tmp_b, num;

	if (b == NULL)
		return (0);
	while (b[index])
	{
		if (!(b[index] == '0' || b[index] == '1'))
			return (0);
		len_b++;
		index++;
	}
	len_b = len_b - 1;
	tmp_b = len_b;
	for (index = 0; index <= len_b; index++)
	{
		if (b[index] == '0')
			num = 0;
		else if (b[index] == '1')
			num = 1;
		sum = sum + (num << tmp_b);
		tmp_b--;
	}
	return (sum);
}
