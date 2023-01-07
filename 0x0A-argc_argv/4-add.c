#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Allow success
*/
int main(int argc, char *argv[])
{
	int i, add = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(atoi(argv[i]) == 0) || argv[i] == 0)
			{
				add = add + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			if (i == argc - 1)
			{
				printf("%d\n", add);
				return (0);
			}
		}
	}
	else
	{
		printf("0\n");
		return (1);
	}
}
