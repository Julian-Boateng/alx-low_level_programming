#include "main.h"

/**
 * flip_bits - Calculates the number of bits that need to be flipped to go from
 * one number to another.
 *
 * @n: First unsigned long int.
 * @m: Second unsigned long int.
 *
 * Return: The number of bits needed to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		if (diff & 1)
			count++;
		diff >>= 1;
	}

	return (count);
}

