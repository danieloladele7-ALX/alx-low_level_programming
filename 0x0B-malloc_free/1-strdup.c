#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Copies string to a newly allocated space in memory.
 * @str: string we need to duplicate
 *
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *newstr = NULL;
	unsigned int i;
	int size;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;

	newstr = (char *)malloc(size + 1 * sizeof(char));

	if (newstr != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			newstr[i] = str[i];
	} else
	{
		return (NULL);
	}
	newstr[i] = '\0';
	return (newstr);
}

