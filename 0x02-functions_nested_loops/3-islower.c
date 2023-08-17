#include "main.h"

/**
 * _islower - Prints 1 if the aphabet is lower case
 *and 0 otherwise
 *@c: The alphabet that is checked
 * Return: 1 if the alphabet is lowe7r case
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
