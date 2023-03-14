#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
<<<<<<< HEAD
 * @size: size of array
 * @c: char to assign
 * Return: NULL if size = 0
 * pointer to the array
=======
 * @size: size of the array
 * @c: char to assign
 * Return: pointer to array, NULL if fail and size = 0
>>>>>>> a3b9aa5692fea82ea4ed397d568fd8fefe89cb81
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

<<<<<<< HEAD
	str = malloc(size * sizeof(char));

	if (size == 0 || *p == NULL)
=======
	p = malloc(size * sizeof(char));

	if (size == 0 || p == NULL)
>>>>>>> a3b9aa5692fea82ea4ed397d568fd8fefe89cb81
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
<<<<<<< HEAD
=======

>>>>>>> a3b9aa5692fea82ea4ed397d568fd8fefe89cb81
