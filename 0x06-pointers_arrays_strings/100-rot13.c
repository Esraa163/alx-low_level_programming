#include "main.h"

/**
 * *rot13 - will rev as in ASCII
 * @a: input
 * Return: the value
*/

char *rot13(char *a)
{
	int i, j;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHILKLM";

		for (i = 0; a[i] != '\0'; i++)
		{
			for (j = 0; j < 52; j++)
			{
				if (a[i] == rot13[j])
				{
					a[i] = ROT13[j];
					break;
				}
			}
		}

	return (a);
}
