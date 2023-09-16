#include "main.h"

/**
 * print_diagonal - to print a diGNONAL
 *
 * @n: the number of the lines that is the diagnal is
*/

void print_diagonal(int n)
{
	int dig, i, k;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (k = 0; k < i; k++)
				_putchar(' ');
			_putchar(92); /*which that num will print '/'*/
			_putchar('\n')
		}
	}
}
