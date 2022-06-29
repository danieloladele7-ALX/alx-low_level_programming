#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat -concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer should point to a newly allocated space in memory or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr = NULL;
	unsigned int i;
	int size1, size2, count;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	newstr = (char *)malloc((size1 + size2 + 1) * sizeof(char));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		newstr[i] = s1[i];
	for (count = 0; s2[count] != '\0'; i++)
	{
		newstr[i] = s2[count];
		count++;
	}
	return (newstr);
}
