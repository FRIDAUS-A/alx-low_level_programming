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
	int i = 0, add = 0;
	
	++i;
	while (i < argc)
	{
		if (!(atoi(argv[i]) == 0) || argv[i] == 0)
		{
			add = add + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
			break;
		}
		if (i == argc - 1)
		{
			printf("%d\n", add);
			return (0);
		}
		i++;
	}
	if (i == 1)
	{
		printf("0\n");
		return (1);
	}
}
