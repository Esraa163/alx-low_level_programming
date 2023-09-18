#include "main.h"

/**
 * _puts - print the string
 *
 * @str: the input pointer to function
*/

void _puts(char *str)
{
	for (str = 0; *str != '\0'; str++)
		_putchar(*str + 0);

	_putchar('\n');
}
