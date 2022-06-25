#include "main.h"
/**
 * _strlen - give the length of a string
 * @s: the string passed as a char ptr
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
	return (i);
}
