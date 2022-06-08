#include "main.h"

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
