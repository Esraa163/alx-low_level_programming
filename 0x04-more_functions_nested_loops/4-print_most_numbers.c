#include "main.h"

/**
 * print_most_numbers - prints all number exp
 *		two numbers 2 and 4
*/

void print_most_numbers(void)
{
	char ch;

	for (ch = 48; ch <= 57; ch++)
	{
		if (ch != 50 && ch != 52)
			putchar (ch);
	}
	_putchar('\n');
}
