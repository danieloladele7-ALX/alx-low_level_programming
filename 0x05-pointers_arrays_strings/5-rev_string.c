#include "main.h"
/**
 * rev_string - reverses the position of char in string
 * @s: string pointer
 * Returns: void.
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp[500];

	while (*(s + i))
	{
		*(temp + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(temp + j);
		j++;
		i--;
	}
}
