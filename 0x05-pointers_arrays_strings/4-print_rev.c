#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse, followed by a new line.
 * @s: The string to be printed with a pointer *s.
 */

void print_rev(char *s)
{
	int index;

	index = 0;

	while (s[index] != '\0')
	{
		index++;
	}

	for (index -= 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
