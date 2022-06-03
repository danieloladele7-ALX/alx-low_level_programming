#include <stdio.h>
/**
 * main - Prints a to z in reverse using putchar.
 *
 * Return: 0 on success
 */
int main(void)
{
	char c;
	for (c = 'z' ; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
