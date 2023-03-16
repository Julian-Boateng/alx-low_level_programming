#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to a newly allocated space in memory
 * NULL, If the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	a = malloc(sizeof(char) * (i + n + 1));
	if (a == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		a[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		a[i] = s2[j];
		i++, j++;
	}
	a[i] = '\0';
	return (a);
}
