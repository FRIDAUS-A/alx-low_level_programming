#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenate all the argument of a string
 * @ac: argument count
 * @av: argument vector
 * Return: Allow success
*/
char *argstostr(int ac, char **av)
{
	int i = 0, j, count = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * ac);
	if (ptr == NULL)
		return (NULL);
	while (*(av[i]) + j)
	{
		for (j = 0; *(av[i]) + j; j++)
		{
			ptr[count] = *(av[i] + j);
			count++;
		}
		ptr[count] = '\n';
	}
	return (ptr);
}

