#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - using if else while variables
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("value of n is positive\n");
	} else if (n < 0)
	{
		printf("value of n is negative\n");
	} else
		printf("n is zero\n");
	return (0);
}
