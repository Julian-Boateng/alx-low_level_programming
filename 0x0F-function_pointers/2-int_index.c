#include "function_pointers.h"

/**
 * int_index -  searches for an integer
 * @array: array
 * @size: the number of elements in the array array
 * @cmp:  pointer to the function to be used to compare values
 * Return: -1 If no element matches and If size <= 0
 * else,the integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
