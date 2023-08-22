#include <stdio.h>
#include "main.h"

/**
 * rev_string - A function that reverses a string.
 * @s: A string to be reversed
 */

void rev_string(char *s)
{
	int index_1;
	int index_2;
	char rev;

	index_1 = 0;
	index_2 = 0;

	while (s[index_1] != '\0')
	{
		index_1++;
	}

	for (index_2 = index_1 - 1; index_2 >= index_1 / 2; index_2--)
	{
		rev = s[index_2];
		s[index_2] = s[index_1 - index_2 - 1];
		s[index_1 - index_2 - 1] = rev;
	}
}
