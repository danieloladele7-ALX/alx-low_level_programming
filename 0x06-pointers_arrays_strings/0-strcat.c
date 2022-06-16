#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_size;
	int it;

	dest_size = 0;

	while (dest[dest_size] != 0)
	{
		dest_size++;
	}

	it = 0;

	while (src[it] != 0)
	{
		dest[dest_size] = src[it]; /* Set end of dest to beg of src */
		dest_size++;
		it++;
	}
	return (dest);
}
