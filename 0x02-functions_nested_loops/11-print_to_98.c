#include "main.h"

/**
 * print_to_98 - print n to 98 counts
 *		separated by , and splace
 *		printed in order
 *
 * @n: input
*/

void print_to_98(int n)
{
	if (n > 98)
		for (int i = n; i > 98; i--)
			printf("%d, ", i);
	else
		for (int k = n; k < 98; k++)
			printf("%d, ", k);
	printf("98\n");
}
