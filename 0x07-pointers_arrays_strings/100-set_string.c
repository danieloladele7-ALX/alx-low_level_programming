#include "main.h"
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to a char.
 * @s: pointer to hold pointer
 * @to: the original pointer
 *
 * Return: string in original pointer.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
