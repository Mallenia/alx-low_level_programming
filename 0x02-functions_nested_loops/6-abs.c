#include "main.h"

/**
 * _abs - Printout the absolute value of an integer
 *@i: Variable to be checked
 * Return: The absolute value of an integer
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (-1 * i);
	}
	else if (i > 0)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}
