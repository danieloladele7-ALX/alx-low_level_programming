#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to check for
 *
 * Return: pointer to the spot where c is or a null value
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
