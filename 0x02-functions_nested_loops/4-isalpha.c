#include "main.h"

/**
 * _isalpha - Prints 1 if the variable is an alphabet
 *and 0 otherwise
 *@c: The variable that is checked
 * Return: 1 (Success) and 0 otherwise
 */

int _isalpha(int c)
{
	if ((char) c >= 97 && (char) c <= 122)
	{
		return (1);
	}
	else if ((char) c >= 65 && (char) c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
