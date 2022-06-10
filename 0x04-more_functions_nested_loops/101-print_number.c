#include "main.h"

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */
void print_number(int n)
{
	int l; /* power of 10 */
	int c; /* boolean check */
	int num; /* convert int to long */
	char hyphen = 45;

	num = n;
	/* negatives */
	if (num < 0)
	{
		num *= -1;
		_putchar(hyphen);
	}

	/* count up */
	l = 1;
	c = 1;
	while (c)
	{
		if (num / (l * 10) > 0)
			l *= 10;
		else
			c = 0;
	}

	/* count down */
	while (num >= 0)
	{
		if (l == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / l % 10) + '0');
			l /= 10;
		}
	}
}
