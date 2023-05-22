#include "main.h"

/**
 * _memcpy - copies memory areas
 * @src: source to be copied from
 * @dest: destination of what has been copied
 * @n: bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}

