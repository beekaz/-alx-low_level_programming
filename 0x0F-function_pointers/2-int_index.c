#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for interger
 * @array: a pointer to array
 * @cmp: is a pointer to the function to be used to compare values
 * @size: is the number of elements in the array array
 * return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

