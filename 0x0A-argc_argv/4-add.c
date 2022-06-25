#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds all valid numbers passed to main, or Error
 * @argc: argument count
 * @argv: argument vector of strings
 * Return: 1 if error, 0 if function runs correctly
 */
int main(int argc, char *argv[])
{
	int total = 0, i, arg;
	char *ptr;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			/* strol converts strings to long int */
			arg = strtol(argv[i], &ptr, 10);

			if (!*ptr)
				total += arg;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
