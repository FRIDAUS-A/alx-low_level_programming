#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Allow success
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i])
	{
		i++;
	}
	printf("%d", i - 1);
	_putchar('\n');
	return (0);
}
