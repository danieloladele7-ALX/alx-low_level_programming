#include "main.h"
/**
 * _islower -  checks for lowercase character and return 1 or 0
 * @c:init
 * Return: @c value
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
