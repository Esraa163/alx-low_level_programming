#include "main.h"

/**
 * print_numbers - function that prints from 0 to 9
 *		only by using putchar
*/

void print_numbers(void)
{
	char ch;

	for (ch = 0; ch <= 9; ch++)
		_putchar(ch + 48);
	_putchar('\n');
}
