#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars, and
 * initializes it with a character c.
 * @size: size of array
 * @c: array initializer
 *
 * Return: pointer to array or NULL if size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	/* set array size*/
	if (size != 0)
	{
		array = (char *) malloc(size * sizeof(char));
		/* fill array with c */
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}

	return (array);
}
