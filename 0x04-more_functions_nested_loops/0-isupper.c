#include "main.h"

/**
 * _isupper - Prints 1 if the aphabet is upper case
 *and 0 otherwise
 *@alpha: The alphabet that is checked
 * Return: 1 if the alphabet is upper case
 */

int _isupper(int alpha)
{
	if (alpha >= 65 && alpha <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
