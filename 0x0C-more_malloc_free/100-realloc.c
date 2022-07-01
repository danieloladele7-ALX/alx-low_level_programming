#include "main.h"
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to previous memory block
 * @old_size: size in bytes of allocated memory for `ptr`
 * @new_size: size in bytes for new allocated space
 *
 * Return: Pointer to new memory block, or NULL if error
 */
void *_realloc1(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr, *copy = ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	/* set new size and return NULL if malloc fails */
	newptr = malloc(new_size);
	if (newptr == NULL)
			return (NULL);
	if (ptr == NULL)
		return (newptr);

	for (i = 0; i < old_size; i++)
		newptr[i] = copy[i];
	free(ptr);
	return (newptr);
}
