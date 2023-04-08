#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check the value of
 * @index: index at which to look for the bit
 *
 * Return: value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index >= sizeof(n) * 8)
		return (-1);

	i = sizeof(n) * 8 - index - 1;
	return ((n >> i) & 1);
}

