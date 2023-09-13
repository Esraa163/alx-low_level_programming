#include "main.h"

/**
 * print_alphabet_x10 - that print the alphabets from a - z but 10 times
*/

void print_alphabet_x10(void)
{
	int ch,i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
