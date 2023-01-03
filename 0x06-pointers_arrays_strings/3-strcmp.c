#include "main.h"
#include <stdlib.h>
/**
 * _strcmp - a function that compares two strings
 * @s1: first parameter
 * @s2: second parameter
 * Return: Allow success
*/
int _strcmp(char *s1, char *s2)
{
	int count;

	while (s1[count] && s2[count])
	{
		if (s1[count] == s2[count++])
		{
			return (0);
		}
		else if (s1[count] != s2[count] && atoi(s1[count]) > atoi(s2[count]))
		{
			return (atoi(s1[count]) - atoi(s2[count]));
					break;
		}
		else if (s1[count] != s2[count] && atoi(s1[count]) < atoi(s2[count]))
		{
			return (atoi(s2[count]) - atoi(s1[count]));
					break;
		}
		count++;
	}
}
