#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints the first 50 characters
 * Return: Allow success
*/
int main(void)
{
	long int  a_1 = 1, a_2 = 2;
	int n;

	for (n = 0; n < 25; n++)
	{
		printf("%ld, %ld", a_1, a_2);
		if (n != 24)
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
