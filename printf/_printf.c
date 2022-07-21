#include "main.h"

/**
 * check_format - checks for a valid print format
 * @format: possible format
 *
 * Return: pointer to valid function or NULL
 */
 static int (*check_format(const char *format))(va_list)
{
	unsigned int i;
	print_t print[] = {
		{"c", print_c},
		{"s", print_s},
		{"S", print_S},
		{"r", print_r},
		{"i", print_i},
		{"d", print_d},
		{"u", print_u},
		{"b", print_b},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"R", print_R},
		{NULL, NULL}
	};

	for (i = 0; print[i].t != NULL; i++)
	{
		if (*(print[i].t) == *format)
		{
			break;
		}
	}
	return (print[i].f);
}

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, itr = 0;
	va_list list;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			itr++;
		}
		if (!format[i])
			return (itr);
		f = check_format(&format[i + 1]);
		if (f != NULL)
		{
			itr += f(list);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		itr++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(list);
	return (itr);
}
