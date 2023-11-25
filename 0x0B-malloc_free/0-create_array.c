include "main.h"

/**
 * *create_array - creating array
 * @size: input size
 * @c: input string that get its size
 * Return: char poiter to the array or NULL
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
