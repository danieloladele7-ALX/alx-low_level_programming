#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 *
 * Return: address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1Size, n2Size, k, l, m, n;

	for (n1Size = 0; n1[n1Size]; n1Size++)
		;
	for (n2Size = 0; n2[n2Size]; n2Size++)
		;
	if (n1Size > size_r || n2Size > size_r)
		return (0);
	m = 0;
	for (n1Size -= 1, n2Size -= 1, k = 0; k < size_r - 1; n1Size--, n2Size--, k++)
	{
		n = m;
		if (n1Size >= 0)
			n += n1[n1Size] - '0';
		if (n2Size >= 0)
			n += n2[n2Size] - '0';
		if (n1Size < 0 && n2Size < 0 && n == 0)
		{
			break;
		}
		m = n / 10;
		r[k] = n % 10 + '0';
	}
	r[k] = '\0';
	if (n1Size >= 0 || n2Size >= 0 || m)
		return (0);
	for (k -= 1, l = 0; l < k; k--, l++)
	{
		m = r[k];
		r[k] = r[l];
		r[l] = m;
	}
	return (r);
}
