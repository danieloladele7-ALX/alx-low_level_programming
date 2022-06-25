#include "main.h"
/**
 * _atoi - converts a string to an integer, truncate invalid char
 * @s: string to convert
 *
 * Return: value of integer
 */
int _atoi(char *s)
{
	int i, temp, j, neg;

	i = j = 0;
	neg = 1;
	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			neg *= -1;
		i++;
	}
	temp = i;
	while ((*(s + temp) >= '0') && (*(s + temp) <= '9'))
	{
		j = j * 10 + neg * (*(s + temp) - '0');
		temp++;
	}
	return (j);
}
