#include "main.h"

/**
 * clear_bit - sets the value of the bit at a given index to 0
 * @n: pointer to the number to modify
 * @index: index of the bit to set to 0
 *
 * Return: 1 if successful, -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask <<= index;
	*n &= ~mask;

	return (1);
}

