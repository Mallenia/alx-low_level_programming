#include "main.h"

/**
 * puts_half - A function that prints half of a string.
 * @str: The string str with a pointer *str
 */

void puts_half(char *str)
{
	int i;
	int j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		j = (i - 1) / 2;
	}
	else
	{
		j = i / 2;
	}

	for ( ; j < i; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
