#include "main.h"
/**
 * main - Prints _putchar
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *ptr = "_putchar";
	
	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
	_putchar("\n");
	
	return (0);
}
