#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the source string
 * @c: character to be found
 *
 * Return: a pointer to the first occurrence of c in s
 * Null if character is not found
 */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}

