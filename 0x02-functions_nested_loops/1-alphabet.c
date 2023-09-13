#include "main.h"

/**
 *Description: print_alphabets - utilizes on the _putchar function to print
 *		the alphabets a - z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
