#include "main.h"

/**
 * *_strpbrk - first char and then search of it
 *		with  followed string
 * @s: input string
 * @accept: anther string
 * Return: accepted
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
