#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Store and display random numbers
 *
 * Return: 0 on Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%d is %s ", n, "negative");
	else if (n > 0)
		printf("%d is %s ", n, "positive");
	else
		printf("%d is %s ", n, "zero");

	return (0);
}
