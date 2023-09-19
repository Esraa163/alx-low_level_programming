#include "main.h"

/**
 * print_array - function that will printan array
 *
 * @a: input array to the function
 *
 * @n: the array lenght
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
