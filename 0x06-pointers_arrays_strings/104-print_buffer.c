#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int temp, j, i;

	temp = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (temp < size)
	{
		j = size - temp < 10 ? size - temp : 10;
		printf("%08x: ", temp);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + temp + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + temp + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		temp += 10;
	}
}
