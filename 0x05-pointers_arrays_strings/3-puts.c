#include "main.h"

/**
 * _puts - A function that prints a string, followed by a new line, to stdout
 * @str: A String to be printed with a pointer *str
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
