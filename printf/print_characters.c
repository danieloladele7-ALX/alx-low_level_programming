#include "main.h"

/**
 * print_c - prints a char
 * @c: char to print
 *
 * Return: always 1
 */
int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: number of chars printed
 */
int print_s(va_list s)
{
	int i;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * hex_print - prints a char's ascii value in uppercase hex
 * @c: char to print
 *
 * Return: number of chars printed (always 2)
 */
static int hex_print(char c)
{
	int i;
	char diff = 'A' - ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;
	for (i = 0; i < 2; i++)
	{
		if (d[i] >= 10)
			_putchar('0' + diff + d[i]);
		else
			_putchar('0' + d[i]);
	}
	return (i);
}

/**
 * print_S - prints a string and nonprintable character ascii values
 * @S: string to print
 *
 * Return: number of chars printed
 */
int print_S(va_list S)
{
	unsigned int i;
	int itr = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			itr += 2;
			itr += hex_print(str[i]);
		}
		else
		{
			_putchar(str[i]);
			itr++;
		}
	}
	return (itr);
}

/**
 * print_r - prints a string in reverse
 * @r: string to print
 *
 * Return: number of chars printed
 */
int print_r(va_list r)
{
	char *str;
	int i, itr = 0;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")llun(";
	for (i = 0; str[i]; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		itr++;
	}
	return (itr);
}
