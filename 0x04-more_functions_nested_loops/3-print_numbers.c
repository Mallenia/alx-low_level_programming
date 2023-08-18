#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9
 */

void print_numbers(void)
{
	char index;

	for (index = '0'; index <= '9'; index++)
	{
		_putchar(index);
	}

	_putchar('\n');

}
