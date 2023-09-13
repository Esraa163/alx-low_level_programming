#include "main.h"

/**
 *Description: print alphabits - from a to z by function that maked _putchar
*/

void print_alphabet(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

