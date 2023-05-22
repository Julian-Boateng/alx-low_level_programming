#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: string to be compared to s
 *
 * Return: a pointer to the byte s, Null otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				return (s);
			}
		}
	s++;
	}
	return ('\0');
}

