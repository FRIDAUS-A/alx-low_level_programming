#include "stdlib.h"
#include "main.h"
/**
 * string_nconcat - a function that concatenate string
 * @s1: first parameter
 * @s2: second parameter
 * @n: third parameter
 * Return: Allow success
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s1_count = 0, s2_count = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + s1_count))
		s1_count++;
	while (*(s2 + s2_count))
		s2_count++;
	ptr = malloc(s1_count + n + 1);
	if (ptr == NULL)
		return (NULL);
	for (s1_count = 0; *(s1 + s1_count); s1_count++)
		*(ptr + s1_count) = *(s1 + s1_count);
	if (n >= s2_count)
		n = s2_count;
	for (s2_count = 0; s2_count < n; s2_count++)
		ptr[s1_count + s2_count] = s2[s2_count];
	ptr[s1_count + s2_count] = '\0';
	return (ptr);
}
