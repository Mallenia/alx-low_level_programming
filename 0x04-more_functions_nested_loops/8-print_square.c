#include "main.h"

/**
 * print_square - Prints a square with the given size
 * @size: The size of the square to be printed
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
