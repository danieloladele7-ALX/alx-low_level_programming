#include "main.h"
/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] < '0' || s[i] > '9')
			return (0);
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int index = 0;

	while (s[index] != '\0')
		index++;
	return (index);
}
/**
 * errors - errors handler for main
 * print error, newline and exit 98
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 on (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, i, carry, firstNumber, secondNumber, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();

	result = malloc(sizeof(int) * (_strlen(s1) + _strlen(s2) + 1));
	if (result == NULL)
		return (1);
	for (i = 0; i <= (_strlen(s1) + _strlen(s2)); i++)
		result[i] = 0;
	for (l1 = _strlen(s1) - 1; l1 >= 0; l1--)
	{
		firstNumber = s1[l1] - '0';
		carry = 0;
		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			secondNumber = s2[l2] - '0';
			carry += result[l1 + l2 + 1] + (firstNumber * secondNumber);
			result[l1 + l2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[l1 + l2 + 1] += carry;
	}
	for (i = 0; i < (_strlen(s1) + _strlen(s2)); i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
