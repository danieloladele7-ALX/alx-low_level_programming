include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, num = 0;
	unsigned long int temp;

	for (i = 63; i >= 0; i--)
	{
		temp = n >> i;

		if (temp & 1)
		{
			putchar('1');
			num++;
		}
		else if (num)
			putchar('0');
	}
	if (!num)
		putchar('0');
}
