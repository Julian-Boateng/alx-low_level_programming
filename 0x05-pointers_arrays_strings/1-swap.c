#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a:integer to be swapped
 * @b: second integer to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}

