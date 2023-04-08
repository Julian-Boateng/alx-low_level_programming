#include "main.h"

/**
 * set_bit - sets the bit at a given index to 1
 * @n: pointer to the number to modify
 * @index: index of the bit to set
 *
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1 << index;
	*n |= mask;

	return (1);
}

