#include "main.h"
/**
 * print_diagonal - print lines diagonally
 * @n: the number of times the character | should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('\');
		}
		_putchar('\n');
	}
}
