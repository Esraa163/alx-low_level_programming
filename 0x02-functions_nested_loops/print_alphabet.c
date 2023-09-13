#include "main.h"

/**
 * print alphabits - write the caracter c to stdout
 * @c: the caracter to print
 *
 * Return: 1 (success)
*/

void print_alphabet(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

}
