#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: 0 on success
 */
int main(void)
{
	for (int n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
