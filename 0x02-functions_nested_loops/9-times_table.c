#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0,0,0,0, ...
 * 0,1,2,3, ...
*/

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			c = a * b;
			/*
			 * put space if prouduct ia single number
			 * place the first digit if its two numbers
			 */
			if (c <= 9)
				_putchar(' ');
			else
				_putchar((c / 10) + 48); /*git the first digit*/
			_putchar((c % 10) + 48); /*git the second digit*/
		}
		_putchar('\n')
	}
}
