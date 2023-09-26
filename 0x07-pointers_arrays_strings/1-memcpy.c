#include "main.h"

/**
 * *_memcpy - functin must work as the original one
 *
 * @dest: input string
 * @src: input string
 * @n: number of max bytes
 * Return: the dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
