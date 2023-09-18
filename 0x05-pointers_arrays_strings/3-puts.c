#include "main.h"

/**
 * _puts - print the string
 *
 * @str: the input pointer to function
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}

	_putchar('\n');
}
