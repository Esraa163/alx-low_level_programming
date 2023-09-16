#include "main.h"

/**
 * print_line - function that print the new line by add _
 *
 * @n: the number of lines that will print
*/


void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
