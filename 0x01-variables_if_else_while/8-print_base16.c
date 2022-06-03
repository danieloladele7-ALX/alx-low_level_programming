#include <stdio.h>
/** main - Prints all the numbers of base 16 in lowercase.
*
* Return: 0 on success
*/
int main(void)
{
	for (int n = 0 ; n < 16 ; n++)
	{
		if (n < 10)
			putchar('0' + n);
		else
			putchar(87 + n);
	}
	putchar('\n');
	return (0);
}
