#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: the pointer to the newly created array
 * or NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int *array;
	int index;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (index = 0 ; min <= max ; min++, index++)
		array[index] = min;
	return (array);
}
