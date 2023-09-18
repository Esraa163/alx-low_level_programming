#include "main.h"

/**
 * swap_int - function that swap the numbers
 *
 * @a: is the first input
 *
 * @b: the second input
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
