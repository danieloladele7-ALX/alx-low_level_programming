#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int des_size, it;

	des_size = it = 0;
	/* record dest length*/
	while (*(dest + des_size))
	{
		des_size++;
	}
	/* form dest last, while src has not been exhausted */
	while ((*(dest + des_size) = *(src + it)))
	{
		des_size++;
		it++;
	}
	return (dest);
}
