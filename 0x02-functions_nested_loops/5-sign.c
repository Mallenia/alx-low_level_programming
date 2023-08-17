#include "main.h"

/**
 * print_sign - Returns 1 and prints + if n is greater than zero,
 * returns 0 and prints 0 if n is zero and
 * returns -1 and prints - if n is less than zero
 * @n: The variables to be checked
 * Return: 1 if positive, 0 if zero and -1 if negative
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
