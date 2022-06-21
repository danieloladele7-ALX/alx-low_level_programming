#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - print a chessboard.
 * @a: source matrix
 *
 * Return: chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row <= 7; row++)
	{
		for (col = 0; col <= 7; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
