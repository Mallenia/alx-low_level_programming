#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
	/**
	 *i does not increment, it will always be 0
	 *i is not a char data type
	 */
	printf("Infinite loop avoided! \\o/\n");
	return (0);




}
