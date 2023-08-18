#include "main.h"

/**
 * _isupper - Prints 1 if the aphabet is upper case
 *and 0 otherwise
 *@c: The alphabet that is checked
 * Return: 1 if the alphabet is upper case
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
