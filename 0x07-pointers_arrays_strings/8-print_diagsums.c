#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print additions of the two diagonals.
 * @a: source matrix
 * @size: size NxN of matrix
 *
 * Return: chessboard.
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, l, firstDiagTotal = 0, secondDiagTotal = 0;

	for (i = 0; i < size; i++)
	{
		k =  (size + 1) * i;
		firstDiagTotal += *(a + k);
	}

	for (j = 1; j <= size; j++)
	{
		l = (size - 1) * j;
		secondDiagTotal += *(a + l);
	}
	printf("%d, %d\n", firstDiagTotal, secondDiagTotal);
}
