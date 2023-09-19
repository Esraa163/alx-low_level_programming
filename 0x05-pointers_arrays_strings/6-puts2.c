#include "main.h"

/**
 * puts2 - only print the even number
 *
 * @str: the input string
*/


void puts2(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		if (k % 2 == 0)
			_putchar(str[k]);
	}
	_putchar('\n');
}
