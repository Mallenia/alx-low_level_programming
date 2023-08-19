#include "main.h"

/**
 * print_triangle - Prints a triangle of a given size
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (k = 1; k <= size; k ++)
		{
			for (i = size - k; i > 0; --i)
			{
				_putchar(' ');
			}

			for (j = 1; j <= k; j++)
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
