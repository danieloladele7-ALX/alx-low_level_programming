#include <stdio.h>
/**
 * main - Prints all possible different combinations of three digits.
 *
 * Return: 0 on success
 */
int main(void)
{
	for (int i = 48; i < 58; i++)
		for (int j = i; j < 58; j++)
			for (int k = j; k < 58; k++)
			{
				if (i == j || j == k || i == k)
					continue;
				putchar(i);
				putchar(j);
				putchar(k);

				if (i == 55 && j == 56 && k == 57)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
