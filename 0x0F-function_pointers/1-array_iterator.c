#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - maps an array through a function pointer
 * @array: the int array
 * @size: the array size
 * @action: pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
