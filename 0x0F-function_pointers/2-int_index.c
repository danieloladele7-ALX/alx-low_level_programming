#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer and returns integer index
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function that compares array values
 *
 * Return: index of first element that matches with `cmp`, or -1 if none found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
