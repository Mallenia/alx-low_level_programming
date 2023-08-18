#include "main.h"

/**
 * print_most_numbers - Prints the numbers, from 0 to 9,
 * excluding 2 and 4.
 */

void print_most_numbers(void)
{
	char index;


	for (index = '0'; index <= '9'; index++)
	{
		if (index != '2' && index != '4')
		{
			_putchar(index);
		}
	}

	_putchar('\n');
}
