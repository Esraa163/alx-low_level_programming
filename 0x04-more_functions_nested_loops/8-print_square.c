#include "main.h"

/**
 * print_square - function that will print square
 *		in the shape of #
 *
 * @size: the input number of the seq L and W*
*/

void print_square(int size)
{
	int i, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
