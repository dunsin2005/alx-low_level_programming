#include "main.h"
/**
 * print_last_digit - prints last digit of an integer
 * @n: the int whose last digit is to be printed
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int b;

	if (n < 0)
		n = -n;

	b = n % 10;

	if (b < 0)
		b = -b;

	_putchar(b + '0');

	return (b);
}
