#include <stdio.h>
/**
 * add - function that adds two integers
 * @a: integer
 * @b: integer
 * Return: integer
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - function that subtracts two integers
 * @a: integer
 * @b: integer
 * Return: integer
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - function that multiplies two integers
 * @a: integer
 * @b: integer
 * Return: integer
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - function that divides two integers
 * @a: integer
 * @b: integer
 * Return: integer
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}
/**
 * mod - function that gets the modulus of two integers
 * @a: integer
 * @b: integer
 * Return: integer
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (0);
}
