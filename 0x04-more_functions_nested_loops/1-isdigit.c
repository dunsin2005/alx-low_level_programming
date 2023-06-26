#include "main.h"
/**
 * _isdigit - checks for numbers from 0 to 9
 * @c: the integer to be checked
 * Return: 1 if c is a digit otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
