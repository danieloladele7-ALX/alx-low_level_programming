#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: 0 on success
 */
int main(void)
{
	for (int n = 0 ; n < 9 ; n++)
	{
		int i = n + 1;
		do
		{
			putchar('0' + n);
			putchar('0' + i);
			if (n < 8)
			{
				putchar(',');
				putchar(32);
			}
			i++;
		}
		while (i < 10);
	}
	putchar('\n');
	return (0);
}
