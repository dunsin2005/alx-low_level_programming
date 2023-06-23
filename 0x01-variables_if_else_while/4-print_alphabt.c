#include <stdio.h>
/**
 * main - prinys lowercase alphabets except q and e
 * Return: Always 0
 */
int main(void)
{
	char x;

	x = 'a';
	while
		(x <= 'z')
		{
			if ((x != 'q' && x != 'e') && x <= 'z')
				putchar (x);
			x++;
		}
	putchar ('\n');
	return (0);
}
