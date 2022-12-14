#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints the first 50 characters
 * Return: Allow success
*/
int main(void)
{
	unsigned long long int  a_1 = 1, a_2 = 2;
	unsigned int n;

	for (n = 0; n < 49; n++)
	{
		printf("%llu, %llu", a_1, a_2);
		if (n != 48)
		{
			putchar(',');
			putchar(' ');
		}
		a_1 = a_1 + a_2;
		a_2 = a_1 + a_2;
	}
	putchar('\n');
	return (0);
}
