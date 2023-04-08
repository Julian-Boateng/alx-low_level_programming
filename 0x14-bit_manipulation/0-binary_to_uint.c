#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: Pointer to a string containing a binary number.
 *
 * Return: The unsigned integer representation of the binary number, or 0 if the
 *         string is NULL or contains non-binary characters.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int len = 0;

	if (b == NULL)
	{
		return (0);
	}

	/* Get the length of the string */
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		len++;
	}

	/* Convert the binary string to an unsigned int */
	for (unsigned int i = 0; i < len; i++)
	{
		result <<= 1;
		if (b[i] == '1')
		{
			result += 1;
		}
	}

	return (result);
}

