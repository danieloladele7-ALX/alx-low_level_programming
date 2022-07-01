#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: elements of size bytes
 * @size: size of the array
 *
 * Return: void pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (index = 0; index < nmemb; index++)
		ptr[index] = 0;
	return (ptr);
}
