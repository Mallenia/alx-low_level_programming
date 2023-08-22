#include "main.h"

/**
 * puts2 - A function that prints every other character of a string,
 * starting with the first character.
 * @str: A string that has a pointer *str
 */

void puts2(char *str)
{
	int i;
	int j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
