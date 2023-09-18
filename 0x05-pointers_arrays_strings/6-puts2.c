#include "main.h"

/**
 * puts2 - only print the even number
 *
 * @str: the input string
*/


void puts2(char *str)
{
	int i = 0, k;

	while (str[i] != 0)
		i++;

	for (k = 0; k < i; k + 2)
		_putchar(str[k]);
	_putchar('\n');
}
