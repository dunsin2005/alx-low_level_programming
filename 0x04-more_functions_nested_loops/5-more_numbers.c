#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * followed by a new line
 */
void more_numbers(void)
{
	int i, j;

	i = 0;

	while
		(i < 10)
		{
			j = '0';
				while
					(j <= '14')
					{
					_putchar(j);
				j++;
					}
			_putchar('\n');
				i++;
		}
}
