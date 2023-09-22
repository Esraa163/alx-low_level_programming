#include "main.h"

/**
 * reverse_array - function that will rev the array
 *
 * @a: input array
 * @n: size of array
*/

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
