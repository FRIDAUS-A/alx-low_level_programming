#include <stdio.h>
/**
 * main - Entry point
 * Description: the sum of all multiples of 3 or 4 below 1024
 * Return: Allow success
*/
int main(void)
{
	int n, a = 0;

	for (n = 3; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			a = a + n;
	}
	printf("%d\n", a);
	return (0);
}
