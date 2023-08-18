#include <stdio.h>

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: A variable that is checked
 * Return: 1 is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else if ((char) ((char) c) >= '0' && (char)((char) c) <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
