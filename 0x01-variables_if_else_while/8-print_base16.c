#include <stdio.h>
/**
 * main - prints numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	char x;
	int i;

	x = 'a';
	i = 0;

	while
		(i < 10)
		{
			putchar(i + '0');
			i++;
		}
	while
		(x <= 'f')
		{
			putchar('x');
			x++;
		}
	putchar('\n');
	return (0);
}
