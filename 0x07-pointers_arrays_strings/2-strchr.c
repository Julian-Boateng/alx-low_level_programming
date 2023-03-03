#include "main.h"

/**
 * _strchr - function name
 * @s : pointer to check if the value is inside
 * @c : the value to check
 * Return: string or null.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
