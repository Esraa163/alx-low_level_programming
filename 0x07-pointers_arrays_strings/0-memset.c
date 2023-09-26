#include "main.h"

/**
 * *_memset - function that work as the function memset
 *
 * @s: input string
 *
 * @b: constant
 *
 * @n: max number of bytes
 * Return: string s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
