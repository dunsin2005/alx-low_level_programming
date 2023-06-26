#include "main.h"
/**
 * int _isalpha - checks for letters
 * @c: the character to be checked
 * Return: 1 if c is a letter otherwise return 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
