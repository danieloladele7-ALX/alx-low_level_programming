#include "main.h"
/**
 * _pow_recursion - multiplies a given value, x, y times
 * @x: the given integer value
 * @y: the power the value is raised to. Power must be >= 0.
 *
 * Return: the calculated value to the given power of y, or -1 for error.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
