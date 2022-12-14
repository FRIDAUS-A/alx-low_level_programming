#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints the first 50 characters
 * Return: Allow success
*/
int main(void)
{
	int n,  a_1 = 1, a_2 = 2;

	for (n = 0; n < 25; n++)
	{
		printf("%d, %d", a_1, a_2);
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
