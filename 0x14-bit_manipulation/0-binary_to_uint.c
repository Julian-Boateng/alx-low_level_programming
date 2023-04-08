#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: a string containing a binary number
 *
 * Return: the converted unsigned integer or 0 if an error occurs
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; ++b) {
		if (*b != '0' && *b != '1')
			return (0);
		result = (result << 1) | (*b - '0');
	}

	return (result);
}

