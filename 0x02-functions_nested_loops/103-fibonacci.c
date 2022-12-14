#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints the first 50 characters
 * Return: Allow success
*/
int main(void)
{
	long int s = 0, a_1 = 1, a_2 = 2;
	int n;

	for (n = 0; a_1 <=  4000000 || a_2 <= 4000000; n++)
	{
		if (a_1 % 2 == 0)
			s = s + a_1;
		else if (a_2 % 2 == 0)
			s = s + a_2;
		a_1 = a_1 + a_2;
		a_2 = a_1 + a_2;
	}
	printf("%ld", s);
	putchar('\n');
	return (0);
}
