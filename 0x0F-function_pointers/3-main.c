#include "3-calc.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: string of arguments in array
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*o)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	o = get_op_func(argv[2]);
	if ((argv[2][1] != '\0') || (o == NULL))
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", o(a, b));

	return (0);
}
