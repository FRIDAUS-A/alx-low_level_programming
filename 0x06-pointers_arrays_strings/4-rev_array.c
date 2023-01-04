#include "main.h"
/**
 * reverse_array - a function that reverse an array
 * @a: first parameter
 * @n: second parameter
 * Return: Allow success
*/
void reverse_array(int *a, int n)
{
	int *p, count;

	for (count = 0; *(a + count) != '\0'; count++)
		*(p + count) = *(a + count);
	*(p + count) = '\0';
	for (count = 0; n >= 0; count++)
		*(a + count) = *(p + --n);
	*(a + count) = '\0';
}
