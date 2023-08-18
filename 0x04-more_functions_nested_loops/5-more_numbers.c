#include <unistd.h>
#include "main.h"

/**
 * more_numbers - Pints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	char Index[20] = ;
	int mul;
	int num;

	for (mul = 0; mul <= 9; mul++)
	{
		for (num = 0; num <= 20; num++)
		{
			_putchar(Index[num]);
		}

		_putchar('\n');
	}

	_putchar('\n');
}
