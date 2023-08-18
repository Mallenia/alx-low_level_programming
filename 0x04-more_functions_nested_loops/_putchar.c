#include <unistd.h>

/**
 * _putchar - Printout a character
 *@a: Charecter to be printed
 * Return: 0 (Success)
 */

int _putchar(char a)
{
        write(1, &a, 1);

        return (0);
}
