#include "main.h"
/**
 * print_rev -prints a string in reverse via putchar
 * @s: a string
 *
 * Return: a void.
 */
void print_rev(char *s)
{
	int temp = 0;

	while (s[temp] != 0)
	{
		temp++;
	}
	while (temp > 0)
	{
		temp--;
		_putchar(s[temp]);
	}
	_putchar('\n');
}
