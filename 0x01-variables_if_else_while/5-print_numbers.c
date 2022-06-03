#include <stdio.h>
/**
 * main - Entry point. Print all single digits of base ten.
 *
 * Return: 0 on Success
 */
int main(void)
{
	int n;
	
	for (n = 0 ; n < 10 ; n++)
		printf("%d", n);
	putchar('\n');
	return (0);
}
