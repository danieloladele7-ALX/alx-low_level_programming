#include "main.h"
/**
 * sqrt_check - Recursively checks the sqrt of a number n
 * by trying out all possible squares of val starting from 0.
 * @n: same number as n
 * @val: an incremented val from 0 to the sqrt of n
 *
 * Return: On success return the val, and -1 if no suited value.
 */
int sqrt_check(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val > n)
		return (-1);
	return (sqrt_check(n, val + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: natural square root of n.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_check(n, 0));
}
