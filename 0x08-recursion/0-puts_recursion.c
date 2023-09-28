#include "main.h"

/**
 * _puts_recursion - print the string by recursive
 * @s: the input string
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recusion(s + 1);
	}
}
