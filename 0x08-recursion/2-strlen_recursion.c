#include "main.h"
/**
 * _strlen_recursion - returns the length of a string recursively
 * @s: string
 *
 * Return: an integer which is the length of the string.
 */
int _strlen_recursion(char *s)
{
	/* count each string as 1 recursively */
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
