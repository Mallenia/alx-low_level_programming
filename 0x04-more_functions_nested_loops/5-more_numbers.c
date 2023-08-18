#include <unistd.h>
#include "main.h"

/**
 * more_numbers - Pints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	char Digit[20] = "01234567891011121314";
	int mul;
	int num;

	for (mul = 0; mul <= 9; mul++)
	{
		for (num = 0; num <= 20; num++)
		{
			_putchar(Digit[num]);
		}

		_putchar('\n');
	}

	_putchar('\n');
}
