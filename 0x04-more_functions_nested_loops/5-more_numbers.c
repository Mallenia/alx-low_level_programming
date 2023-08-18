#include <unistd.h>
#include "main.h"

/**
 * more_numbers - Pints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	char index;
	int mul;

	for (mul = 0; mul <= 9; mul++)
	{
		for (index = '0'; index <= '9'; index++)
		{
			_putchar(index);
		}

		write(1, "1011121314", 10);

		_putchar('\n');
	}

	_putchar('\n');
}
