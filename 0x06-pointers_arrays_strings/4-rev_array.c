#include "main.h"
/**
 * reverse_array - reverses the contents of an array
 * @a: integer array to be reversed
 * @n: length of array a
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	n = n - 1;
	while (i < n)
	{
		/* temporarily hold position i value */
		/* make i value at n and replace n with temp */
		temp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
}
