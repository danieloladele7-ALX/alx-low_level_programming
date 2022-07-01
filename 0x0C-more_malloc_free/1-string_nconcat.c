#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 *
 * Return: char pointer to newly allocated place in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length = n, i;
	char *newstr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		length++;

	newstr = malloc(sizeof(char) * (length + 1));

	if (newstr == NULL)
		return (NULL);
	/* reset length */
	length = 0;

	for (i = 0; s1[i]; i++)
		newstr[length++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		newstr[length++] = s2[i];

	newstr[length] = '\0';

	return (newstr);
}
