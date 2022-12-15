#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Allow success
*/
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 != 0 && a % 5 != 0)
		{
			if (a >= 10)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		else if (a % 3 == 0 && a % 5 != 0)
			printf("Fizz");
		else if (a % 5 == 0 && a % 3 != 0)
			printf("Buzz");
		else if ( a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		if (a != 100)
			_putchar(' ');
	}
	_putchar('\n');
}
