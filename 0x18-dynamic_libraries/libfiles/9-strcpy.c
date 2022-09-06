#include "main.h"
/**
 * _strcpy - copies the string
 * @dest: array buffer that returns
 * @src: the pointer that receive the string
 *
 * Return: the value pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int i;

	while (src[n] != '\0')
	{
		n++;
	}

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	i = i;
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
