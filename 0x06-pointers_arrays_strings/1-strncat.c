#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 * @n: times to iterations
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_sz;
	int it;

	dest_sz = 0;

	while (dest[dest_sz] != 0)
	{
		dest_sz++;
	}

	it = 0;

	while (src[it] != 0 && it < n)
	{
		dest[dest_sz] = src[it];
		dest_sz++;
		it++;
	}
	return (dest);
}
