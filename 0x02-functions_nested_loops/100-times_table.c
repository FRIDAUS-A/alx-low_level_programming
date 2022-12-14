#include "main.h"
/**
 * print_times_table - a function that prints n times table
 * @n: parameter of the function
 * Return: Allow success
*/
void print_times_table(int n)
{
	int row, column, result, next_result;
	
	if ( n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; n++)
			{
				result = row * column;
				next_result = row * (column + 1);
				if (result <= 9)
					_putchar(result + '0');
				else if (result >= 10)
				{
					if (result >= 100)
					{
						_putchar(result / 100 + '0');
						_putchar((result % 100) / 10 + '0');
					}
					if (result < 100)
						_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
					if (next_result >= 0 && column != n)
					{
						_putchar(',');
						_putchar(' ');
					if (next_result >= 10)
						_putchar(' ');
					if (next_result >= 100)
						_putchar(' ');
					}
				}
			}
		}
	}
	_putchar('\n');
}
